usb-ptt-arduino-nano-every
----------

Credit to VE2OLM for developing the 1st instance of using an Arduino Nano to send commands to Flex Radio SmartSDR CAT control.  
----------
* Sketch uses ISR to determine switch pressed.  
* USB port speed is set to 9600.  
* SmartSDR CAT port is configured USB Serial, 9600 baud, 9-N-1 with Hardware flow control.
* Use the log feature in SmartSDR CAT to debug any errors.   
* dax-off ino is template to add DAX Off CAT Command
* Create a SmartCAT Serial Existing comm port for the USB foot switch.  You can use the log function on SmartCAT to see the communication or use Putty serial connection to test. 
* **[Flex USB PTT](https://github.com/w8be/usb-ptt-arduino-nano-every/tree/main/NextGenFlexPTT092530)** - is default configuration.   INO only supports PTT On/Off states
* **[Dax Control](https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/Flex%20USB%20PTT%20files/FlexUsbPttWithDaxControl.ino)** - supports DAX Control.  You will need to add the daxOff function and call it prior to calling PTTOn function in **Flex USB PTT** ino. 
* **[Dax Off Function](https://github.com/w8be/usb-ptt-arduino-nano-every/blob/main/Flex%20USB%20PTT%20files/dax-off.ino)** - function code to add if you allready have **Flex USB PTT] loaded.
