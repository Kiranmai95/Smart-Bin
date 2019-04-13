# Smart-Bin
It is an Interactive Hardware project. The goal of the project is to create a smart bin.

**To begin, the following parts are needed for this project:**
1.  Arduino UNO
2.  Ultrasonic ping sensor
3.	Dustbin
4.	Sevo motor
5.	Buzzer
6.  LED
7.  Smart phone
8.	Bluetooth Module
9.	Particle Photon
10. LCD
11. smartphone

**Software installations Required**
1.  Arduino IDE
2.  Particle IDE
3.  Bluetooth terminal Application in smartphone
4.  IFTT Application


**Objective:**
The main purpose of this project is to build a Smart Bin where it does some functionalities like when it detects the object it automatically opens the lid of the project, also a notification is sent to the bin user mobile when the bin is full. A buzzer also rings and this buzzer is controlled using mobile phone a part from this the user is also notified with garbage pick-up days.In this project signal communication between Arduino and smartphone is achieved in two ways one is using a smartphone buzzer can be stopped by interfacing the Bluetooth module. The other mode of communication is using photon particle a notification is sent to the mobile.

**Problems:**
* Lack of proper waste management.
* Dustbins overflow.
* People forget to place their bin outside on garbage pickup days.
* Constant provocation is required for people to do their duties.

**Approach:**
* One ultrasonic sonic sensor is used to detect the object when an object is brought near the lid of the dustbin.
* Once the Ultrasonic sensor detects the object rotates the servomotor, Servomotor helps to open and close of the bin.
* The other Ultrasonic sensor is used to monitor the waste level of the bin.
* A buzzer rings when the bin is full.
* Using the Bluetooth module a signal is sent to the Arduino from the smartphone to stop the buzzer.
* Alert notifications are sent to the mobile using Photon particle and IFTT App.

**Team Roles:**
All the roles like Gathering the components, Building the Hardware, Programming, Documentations are done by me.

