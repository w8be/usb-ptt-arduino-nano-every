usb-ptt-arduino-nano-every
----------

Control Flex 6xxx radio push to talk (PTT) with CAT control via Arudino Nano Every CAT commands.     
----------
* Utilizes Flex Radio SmartCAT program configured for PTT.     
* USB port speed is set to 115200.  Ensure your usb device in Device Manager is set to 115200.
* Use the log feature in SmartSDR CAT to debug any errors.   
* Create a SmartCAT Serial Existing port for the USB foot switch.  Set the port protocol to 'CAT'.  Use an existing COM port that is connected to the Arduino Nano Every.  You can use the log function on SmartCAT to see the communication or use Putty serial connection to test.
* Use pin D2 and Ground on the Arduino Nano Every to connect to the footswitch.  The Arduino Nano Every pin out can be found at **[Arduino Nano Every Pinout](https://content.arduino.cc/assets/Pinout-NANOevery_latest.pdf)**
* **[Flex USB PTT](https://github.com/w8be/usb-ptt-arduino-nano-every/tree/main)**
