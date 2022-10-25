/*
 * garage_door.ino
 * Using a relay to trigger the garage door opening and closing
 * Also using a tilt sensor to monitor if the garage door is open or not
 *
 *  Created on: 2021-10-18
 *      Author: Ashok Saravanan
 */

#include <Arduino.h>
#include <arduino_homekit_server.h>
#include "wifi_info.h"

//include the Arduino library for your real sensor here, e.g. <DHT.h>

#define LOG_D(fmt, ...)   printf_P(PSTR(fmt "\n") , ##__VA_ARGS__);
int lastVal,val = 0;
char tilt_pin = D0;
char garage_pin = D2;

void setup() {
  Serial.begin(115200);

  pinMode(garage_pin, OUTPUT);
  digitalWrite(garage_pin, LOW);

  pinMode(tilt_pin, INPUT);

  wifi_connect(); // in wifi_info.h
  my_homekit_setup();
}

void loop() {
  my_homekit_loop();
  delay(10);
}

//==============================
// Homekit setup and loop
//==============================

// access your homekit characteristics defined in my_accessory.c

extern "C" homekit_server_config_t config;
extern "C" homekit_characteristic_t cha_current_door_state;
extern "C" homekit_characteristic_t cha_target_door_state;
extern "C" homekit_characteristic_t cha_obstruction_detected;
extern "C" homekit_characteristic_t cha_name;

int currentState = cha_current_door_state.value.uint8_value;

void my_homekit_setup() {
  arduino_homekit_setup(&config);
}


void my_homekit_loop() {
  arduino_homekit_loop();
  for (int i = 0; i< 10; i++) {
    int tiltVal = digitalRead(tilt_pin);
    if (tiltVal != 1) {
      val += 1;
  }
  delay(10);
}

if (lastVal != val) {

  if (val == 10) {
    cha_current_door_state.value.uint8_value = 1;
    homekit_characteristic_notify(&cha_current_door_state, cha_current_door_state.value);
    cha_target_door_state.value.uint8_value = 1;
    homekit_characteristic_notify(&cha_target_door_state, cha_target_door_state.value);
  }

  if (val == 0) {
    cha_current_door_state.value.uint8_value = 0;
    homekit_characteristic_notify(&cha_current_door_state, cha_current_door_state.value);
    cha_target_door_state.value.uint8_value = 0;
    homekit_characteristic_notify(&cha_target_door_state, cha_target_door_state.value);
    }

  }
  lastVal = val;
  my_homekit_report();
  val = 0;
}


void my_homekit_report() {
  if ((cha_target_door_state.value.uint8_value) == 0 and val == 10) {
     if (cha_current_door_state.value.uint8_value != 2) {
       digitalWrite(garage_pin, HIGH);
       delay(500);
       digitalWrite(garage_pin, LOW);
       cha_current_door_state.value.uint8_value = 2;
       homekit_characteristic_notify(&cha_current_door_state, cha_current_door_state.value);         
  }
}
  if ((cha_target_door_state.value.uint8_value) == 1 and val == 0) {
     if (cha_current_door_state.value.uint8_value != 3) {
       digitalWrite(garage_pin, HIGH);
       delay(500);
       digitalWrite(garage_pin, LOW);
       cha_current_door_state.value.uint8_value = 3;
       homekit_characteristic_notify(&cha_current_door_state, cha_current_door_state.value);
    }
  }
}
