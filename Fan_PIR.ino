#define PIR 10
int FAN = 9;

void setup() {
  pinMode(FAN,OUTPUT);
  pinMode(PIR,INPUT);
  Serial.begin(9600);
  Serial.println("Start...");

}

void loop() {

  if(digitalRead(PIR)==HIGH)
    digitalWrite(FAN,LOW);
  else
    digitalWrite(FAN,HIGH);
  delay(2000);
  
}
