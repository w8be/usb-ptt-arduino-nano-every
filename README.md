usb-ptt-arduino-nano-every
----------

Control Flex 6xxx/8xxx radio push to talk (PTT) with CAT control via Arudino Nano Every CAT commands.     
----------
* Utilizes Flex Radio SmartCAT program configured for CAT.
  
* Use pin D2 and Ground on the Arduino Nano Every to connect to the footswitch.  The Arduino Nano Every pin out can be found at **[Arduino Nano Every Pinout](https://content.arduino.cc/assets/Pinout-NANOevery_latest.pdf)**
  
* Arduino Nano Every sketch debounce timer is default set (50ms).  This can be adjusted if necessary.
* USB port speed is set to 115200.  Ensure your usb device in Device Manager is set to 115200.
* Connect the footswitch usb to the pc.   The pc should see the device.  Note the number.  
* Create a SmartCAT Serial Existing port for the USB foot switch using the Arduino Nano Every COM port.
  
  { <br>
    "Name": "usbPtt",<br>
    "Protocol": "CAT" ,<br>
    "Port Type": "Serial",<br>
    "Serial Port": "Existing",<br>
    "CAT COM": "use new port created for Arduino Nano Every" <br>
  }

* Use the logging function on SmartCAT  for testing.
* A terminal emulator (i.e.,"Putty") can be used for testing.
