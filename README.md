# Smart-Home-Garage-Door-Opener

Author: Ashok Saravanan

Created 10-18-2021

This is a homekit-enabled garage door opener that utlizies the ESP-8266 board. Most of the homekit end of things comes from Mixiaoxiao's project on this:

https://github.com/Mixiaoxiao/Arduino-HomeKit-ESP8266

It is very detailed and is what allowed me to make my own implementation.

# Hardware

My implematntion for my garage door is a connection to a pin, that when is switched on, will open/close the garage door. I connected the ESP-8266 board to a realy that would open/close the garage door pin.

I also added a tilt sensor to my garage door to indicate if the door is currenlty open or closed: the design is very simple and needs improvement, but I am woking on a different solution!

# Implementation

Here are some pictures of the ESP-8266 board:

Here is a working video of it in action( I am using Siri to control the homekit accessory): 

# Thanks
*[Mixiaoxiao](https://github.com/Mixiaoxiao/Arduino-HomeKit-ESP8266)
