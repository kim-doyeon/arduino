#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3);

char cmd;
int Pin = 7;
int Pin1 = 8;

void setup()

{
    Serial.begin(9600);
    delay(100);
    BTSerial.begin(9600);
    pinMode(Pin, OUTPUT);
    pinMode(Pin1, OUTPUT);
}

void loop()
{
    if(BTSerial.available())
    {
      cmd = BTSerial.read();
      Serial.print("Command = ");
      Serial.println(cmd);

    if(cmd == '1') {
        Serial.println("LED ON");
        digitalWrite(Pin, HIGH);
    }

    if(cmd == '0') {
        Serial.println("LED OFF");
        digitalWrite(Pin, LOW);
    }   
        if(cmd == '2') {
        Serial.println("BUZZER ON");
        digitalWrite(Pin1, HIGH);
        BTSerial.println(cmd);
        
        }   

    if(cmd == '3') {
        Serial.println("BUZZER OFF");
        digitalWrite(Pin1, LOW);
        BTSerial.println(cmd);
  }
         
}

}
