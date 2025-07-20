<h1>Flex Radio SmartCAT PTT (push to talk) with Arduino Nano Every  <a href="https://github.com/w8be/usb-ptt-arduino-nano-every/wiki/Wiki---usb-ptt-artduino-nano-every">Wiki</a></h1> 

<img src="https://raw.githubusercontent.com/w8be/usb-ptt-arduino-nano-every/refs/heads/main/NanoEvery.jpg" width="30%" height="30%">

----------
Control **[Flex Radio](https://www.flexradio.com/)** 6xxx/8xxx radio push to talk (PTT) with **[SmartCAT](https://www.flexradio.com/documentation/smartsdr-cat-user-guide-pdf)** 
using a **[Arduino Nano Every](https://store.arduino.cc/products/arduino-nano-every?srsltid=AfmBOorS-jerpAcD8xGCUWRznp4vSYjQjUFJY2PZsMW1_JuKi6q4A6WE)** to send **[CAT](https://en.wikipedia.org/wiki/Computer_aided_transceiver)** commands to the Radio.


----------
Utilizes Flex Radio SmartCAT interfaced to an Arduino Nano Every microcontroller wired to a switch(i.e,footswitch).  Depressing the switch sends a MOX on command and when released a MOX off command is sent to the radio. 
***
Load the **[sketch](https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/Flex%20USB%20PTT%20files/flexRadio-usb-ptt.ino)** with the **[Arduino IDE](https://www.arduino.cc/en/software)**. <br> A COM port will be created.  Note the number for configuration and testing.<br>
Arduino Nano Every sketch debounce timer is default set (50ms).  This can be adjusted if necessary.<br>

<img src="https://raw.githubusercontent.com/w8be/usb-ptt-arduino-nano-every/refs/heads/main/arduinoIde.jpg" width="35%" height="35%"></img>


USB port speed is set to 115200.  Ensure your usb device in Device Manager is set to 115200.  

<img  src="https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/com4Properties.jpg?raw=true"  width="35%" height="35%"></img>


Test with the Arduino IDE Serial Montior or a terminal emulator (i.e.,**[Putty](https://www.putty.org/))** can be used for testing.
***
Use pin D2 and Ground on the Arduino Nano Every to connect to the footswitch.  Use the **[Arduino Nano Every Pinout](https://content.arduino.cc/assets/Pinout-NANOevery_latest.pdf)** for reference.<br>
A 1K resistor is used as a pullup resistor from the 3.3v pin to the D2 pin.<br>
Connect pin D2 to the normally open terminal on the foot switch.<br> 
Wire the ground pin on the Nano to the ground or common terminal on your switch.<br>
 
<img src = "https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/NanoEveryWiring.jpg?raw=true" width="60%" height="60%"></img>
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
Connect the footswitch to the computer and test with the radio.  Use the logging function on SmartCAT  for testing.
 
Example CAT Command to turn on MOX:<br>
> &nbsp;&nbsp;2024-10-01 14:24:15.328 COM4 [rcvd]: ZZ<br>
> &nbsp;&nbsp;2024-10-01 14:24:15.331 COM4 [rcvd]: TX1;
  
Example CAT Command to turn off MOX:<br>
> &nbsp;&nbsp;2024-10-01 14:24:15.707 COM4 [rcvd]: ZZ<br>
> &nbsp;&nbsp;2024-10-01 14:24:15.709 COM4 [rcvd]: TX0;<br>
> &nbsp;&nbsp;ZZTX0;

 ***
LINEMASTER Aquiline  foot switch with embedded Arudino Nano Every<br><br>
<img src = "https://github.com/w8be/usb-ptt-arduino-nano-every/raw/main/usbpttarduinonanoevery2%20(1).jpg?raw=true"></img>

<img src = "https://github.com/user-attachments/assets/4e6c2c09-fb3d-4c18-9a87-f6d7b8926a3d"></img>

***
