#define PTT 2 // PTT pinD2 var
volatile int PTT_State = HIGH; // volatile, value changes in ISR
const int bounce_delay = 20;
volatile int bounce_time = 20; // volatile, value changes in ISR
int PTT_Old_State = HIGH;  

void setup() {
pinMode(PTT, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(PTT), switchISR, CHANGE);  // attach interrupt handler
Serial.begin(9600);  // set baud rate for usb port
delay(100);
}

void loop(){  // main code to run with DAX Off command
 if(PTT_State != PTT_Old_State) {
  if(PTT_State == LOW) {
   daxOff();
   delay(10);
   pttOn();
  } if(PTT_State == HIGH) {
   pttOff();
  }
   PTT_Old_State = PTT_State;
 }
} 

// Interrupt Service Routine (ISR)
void switchISR () {
if((bounce_time + bounce_delay) >= 50) {
return;
}
PTT_State = digitalRead(PTT);

} // end of switchPressed

//ptt On CAT Command
void pttOn(){
Serial.print("ZZTX1;");
delay(10);
PTT_State = digitalRead(PTT);
}
// ptt Off CAT Command
void pttOff(){
Serial.print("ZZTX0;");
delay(10);
PTT_State = digitalRead(PTT);
}  
//  Flex DAX Off command
void daxOff(){
  Serial.print("ZZDX0;"); 
}

