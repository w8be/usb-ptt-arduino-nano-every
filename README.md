usb-ptt-arduino-nano-every
----------

Control Flex 6xxx/8xxx radio push to talk (PTT) with CAT control using a Arudino Nano Every to send CAT commands to the Radio.     
----------
* Utilizes Flex Radio SmartCAT program configured for CAT.
  
* Arduino Nano Every sketch debounce timer is default set (50ms).  This can be adjusted if necessary.
* USB port speed is set to 115200.  Ensure your usb device in Device Manager is set to 115200.
* A COM port will be created when loading the sketch with the **[Arduino IDE](https://www.arduino.cc/en/software)**. Note the number for configuration and testing.
  
* A terminal emulator (i.e.,**[Putty](https://www.putty.org/)** can be used for testing.

* Use pin D2 and Ground on the Arduino Nano Every to connect to the footswitch.  Use the **[Arduino Nano Every Pinout](https://content.arduino.cc/assets/Pinout-NANOevery_latest.pdf)** for reference.

* A 1KOhm resistor is used as a pullup resistor from the 3.3v pin to the D2 pin. This pin will connect to the normally open switch on your switch.
  
* Wire the ground pin on the Nano to the ground or common terminal on your switch

* Create a **[SmartCAT](https://www.flexradio.com/documentation/smartsdr-cat-user-guide-pdf/)** Serial Existing port for the USB foot switch using the Arduino Nano Every COM port.
  
  { <br>
    "Name": "usbPtt",<br>
    "Protocol": "CAT" ,<br>
    "Port Type": "Serial",<br>
    "Serial Port": "Existing",<br>
    "CAT COM": "use new port created for Arduino Nano Every" <br>
  }

* Connect the footswitch to the computer and test with the radio.  
* Use the logging function on SmartCAT  for testing.

* <iframe>https://us.v-cdn.net/cdn-cgi/image/fit=scale-down,width=1600/https://us.v-cdn.net/6032377/uploads/89NZ0FHAEM6S/usbpttarduinonanoevery2.jpg</iframe>
