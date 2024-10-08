#include <Bounce2.h>
#define PTT 2
int PTT_State = 0;

Bounce debouncer = Bounce();

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(115200);
    pinMode(PTT, INPUT_PULLUP);
    debouncer.attach(PTT);
    debouncer.interval(50); // interval in ms adjust as needed
}

void loop()
{
    // put your main code here, to run repeatedly:
    debouncer.update();
    if (debouncer.read() != PTT_State)
    {
        if (digitalRead(PTT) == LOW)
        {
            //send xmit on
            Serial.println("ZZTX1;");
            PTT_State = 0;
        }
        else
        {
            // send xmit off twice
            Serial.println("ZZTX0;");
            PTT_State = 1;
            Serial.println("ZZTX0;");
        } 
    }
}
