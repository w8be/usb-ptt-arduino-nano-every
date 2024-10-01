<h1>usb-ptt-arduino-nano-every</h1>

----------
<h2>Control Flex Radio 6xxx/8xxx radio push to talk (PTT) with CAT control using a Arudino Nano Every to send CAT commands to the Radio. </h2>  

<img src="https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/NanoEvery.jpg?raw=true"></src>
----------
Utilizes Flex Radio SmartCAT program configured for CAT.
***
A COM port will be created when loading the **[sketch](https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/Flex%20USB%20PTT%20files/flexRadio-usb-ptt.ino)** with the **[Arduino IDE](https://www.arduino.cc/en/software)**. <br>Note the number for configuration and testing.<br>
Arduino Nano Every sketch debounce timer is default set (50ms).  This can be adjusted if necessary.<br>
USB port speed is set to 115200.  Ensure your usb device in Device Manager is set to 115200.  
A terminal emulator (i.e.,**[Putty](https://www.putty.org/))** can be used for testing.
***
Use pin D2 and Ground on the Arduino Nano Every to connect to the footswitch.  Use the **[Arduino Nano Every Pinout](https://content.arduino.cc/assets/Pinout-NANOevery_latest.pdf)** for reference.<br>
 A 1K resistor is used as a pullup resistor from the 3.3v pin to the D2 pin. This pin will connect to the normally open terminal on the foot switch.<br>  
 Wire the ground pin on the Nano to the ground or common terminal on your switch.<br>

<img src = "https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/NanoEveryWiring.jpg?raw=true"></img>
***

Create a **[SmartCAT](https://www.flexradio.com/documentation/smartsdr-cat-user-guide-pdf/)** Serial Existing port for the USB foot switch using the Arduino Nano Every COM port.

<img src ="https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/usbptt1.jpg?raw=true"></img>

  { <br>
      &nbsp;&nbsp;&nbsp;&nbsp;"Name": "usbPtt",<br>
      &nbsp;&nbsp;&nbsp;&nbsp;"Protocol": "CAT" ,<br>
      &nbsp;&nbsp;&nbsp;&nbsp;"Port Type": "Serial",<br>
      &nbsp;&nbsp;&nbsp;&nbsp;"Serial Port": "Existing",<br>
      &nbsp;&nbsp;&nbsp;&nbsp;"CAT COM": "use new port created for Arduino Nano Every" <br>
  }

<img src ="https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/usbptt2.jpg?raw=true"></img>

***
Connect the footswitch to the computer and test with the radio.  
 Use the logging function on SmartCAT  for testing.
 
Example CAT Command to turn on MOX:<br>
&nbsp;&nbsp;>2024-10-01 14:24:15.328 COM4 [rcvd]: ZZ
  &nbsp;&nbsp;>2024-10-01 14:24:15.331 COM4 [rcvd]: TX1;
  
Example CAT Command to turn off MOX:<br>
&nbsp;&nbsp;2024-10-01 14:24:15.707 COM4 [rcvd]: ZZ
  &nbsp;&nbsp;2024-10-01 14:24:15.709 COM4 [rcvd]: TX0;
  &nbsp;&nbsp;ZZTX0;
  

<img src = "https://github.com/w8be/usb-ptt-arduino-nano-every/raw/main/usbpttarduinonanoevery2%20(1).jpg?raw=true"></img>

<img src = "https://github.com/user-attachments/assets/4e6c2c09-fb3d-4c18-9a87-f6d7b8926a3d"></img>

***
