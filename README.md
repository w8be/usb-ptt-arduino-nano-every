usb-ptt-arduino-nano-every
----------

Control Flex 6xxx/8xxx radio push to talk (PTT) with CAT control via Arudino Nano Every CAT commands.     
----------
* Utilizes Flex Radio SmartCAT program configured for CAT.
* Use pin D2 and Ground on the Arduino Nano Every to connect to the footswitch.  The Arduino Nano Every pin out can be found at **[Arduino Nano Every Pinout](https://content.arduino.cc/assets/Pinout-NANOevery_latest.pdf)**   
* USB port speed is set to 115200.  Ensure your usb device in Device Manager is set to 115200.  
* Create a SmartCAT Serial Existing port for the USB foot switch.  Set the port protocol to 'CAT'.
* Use an existing COM port that is connected to the Arduino Nano Every.
* Use the log function on SmartCAT to test.
