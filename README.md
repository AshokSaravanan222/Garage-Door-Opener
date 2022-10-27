# Garage-Door-Opener

Author: Ashok Saravanan

Created 10-18-2021

This is a homekit-enabled garage door opener that utlizies the ESP-8266 board. Most of the homekit end of things comes from Mixiaoxiao's project on this:

https://github.com/Mixiaoxiao/Arduino-HomeKit-ESP8266

It is very detailed and is what allowed me to make my own implementation.

# Hardware

My implematntion for my garage door is a connection to a pin, that when is switched on, will open/close the garage door. I connected the ESP-8266 board to a realy that would open/close the garage door pin.

I also added a tilt sensor to my garage door to indicate if the door is currenlty open or closed.

# Implementation

Here are some pictures of the ESP-8266 board:

![image1](https://user-images.githubusercontent.com/90977640/197659711-05e54f05-42ec-496d-9c56-6b91eddf26ab.jpg)

![image2](https://user-images.githubusercontent.com/90977640/197659768-cb2b101f-6025-4195-bd83-ef3723b76bdc.jpg)


Here is a working video of it in action( I am using Siri to control the homekit accessory): 


https://user-images.githubusercontent.com/90977640/197659628-298456e7-c2d2-42a0-85e0-64d1feb24b7b.mp4



# Thanks
[Mixiaoxiao](https://github.com/Mixiaoxiao/Arduino-HomeKit-ESP8266)
