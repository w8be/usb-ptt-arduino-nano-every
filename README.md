usb-ptt-arduino-nano-every
----------

Credit to VE2OLM for developing the 1st instance of using an Arduino Nano to send commands to Flex Radio SmartSDR CAT control.  
----------
* Sketch uses ISR to determine switch pressed.  
* USB port speed is set to 9600.  
* SmartSDR CAT port is configured USB Serial, 9600 baud, 9-N-1 with Hardware flow control.
* Use the log feature in SmartSDR CAT to debug any errors.   
* dax-off ino is template to add DAX Off CAT Command
