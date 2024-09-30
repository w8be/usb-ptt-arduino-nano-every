usb-ptt-arduino-nano-every
----------

Control Flex 6xxx/8xxx radio push to talk (PTT) with CAT control via Arudino Nano Every CAT commands.     
----------
* Utilizes Flex Radio SmartCAT program configured for CAT.
  
* Arduino Nano Every sketch debounce timer is default set (50ms).  This can be adjusted if necessary.
* USB port speed is set to 115200.  Ensure your usb device in Device Manager is set to 115200.
* Load the sketch using the Arduino IDE.  A COM port will be created. Note the number for configuration and testing.
* You should now be able to test the footswitch with a terminal emulator (i.e.,"Putty"). 

* Use pin D2 and Ground on the Arduino Nano Every to connect to the footswitch.  Use the **[Arduino Nano Every Pinout](https://content.arduino.cc/assets/Pinout-NANOevery_latest.pdf)** for reference.

* Create a SmartCAT Serial Existing port for the USB foot switch using the Arduino Nano Every COM port.
  
  { <br>
    "Name": "usbPtt",<br>
    "Protocol": "CAT" ,<br>
    "Port Type": "Serial",<br>
    "Serial Port": "Existing",<br>
    "CAT COM": "use new port created for Arduino Nano Every" <br>
  }

* Connect the footswitch to the computer and test with the radio.  
* Use the logging function on SmartCAT  for testing.
