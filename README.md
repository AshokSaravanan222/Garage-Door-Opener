# Smart Garage Door Opener

Author: Ashok Saravanan

Created 10-18-2021

This is a homekit-enabled garage door opener that utlizies the ESP-8266 board. Most of the homekit end of things comes from Mixiaoxiao's project on this:

https://github.com/Mixiaoxiao/Arduino-HomeKit-ESP8266

It is very detailed and is what allowed me to make my own implementation.

# Hardware

My implementation for my garage door is a connection to a pin, that when is switched on, will open/close the garage door. I connected the ESP-8266 board to a realy that would open/close the garage door pin.

I also added a tilt sensor to my garage door to indicate if the door is currenlty open or closed.

# Implementation

Here are some pictures of the ESP-8266 board:

<img src="https://user-images.githubusercontent.com/90977640/199140750-2ed94975-9732-4aa6-a54d-b80ccec126e3.jpg" width=49% height=50%> <img src="https://user-images.githubusercontent.com/90977640/199140847-e43badbd-c358-46a4-b807-e581f63562de.jpg" width=49% height=50%>

**Here is a working video of it in action( I am using Siri to control the homekit accessory):** 


https://user-images.githubusercontent.com/90977640/197659628-298456e7-c2d2-42a0-85e0-64d1feb24b7b.mp4

# Updated Pictures
<img src="https://user-images.githubusercontent.com/90977640/218559582-30f4dae3-42ba-47a8-b69a-13154dce00b0.PNG" width=37% height=25%> <img src="https://user-images.githubusercontent.com/90977640/218559557-ae0ae7f9-955d-43aa-b0c3-e2d22e9280dc.jpg" width=49% height=50%> 

# Thanks
[Mixiaoxiao](https://github.com/Mixiaoxiao/Arduino-HomeKit-ESP8266)
