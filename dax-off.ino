// add void-loop for DAX Off command
void daxOff(){
  Serial.print("ZZDX0;"); 
}

void loop(){  // change void-loop to add daxOff() / delay() :  
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
