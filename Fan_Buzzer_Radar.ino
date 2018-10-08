#define trigPin 3
#define echoPin 2
#define BUZZER 10
#define FAN 9

long duration, distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(FAN,OUTPUT);
  pinMode(BUZZER,OUTPUT);

}

void loop() {
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  
  duration=pulseIn(echoPin,HIGH);
  distance=(duration/2)/29.1;
  
  Serial.print(distance);
  Serial.println("cm");

  if(distance<10){
    
    digitalWrite(BUZZER,HIGH);
    delay(500);
    digitalWrite(BUZZER,LOW);
    digitalWrite(FAN,HIGH);
    delay(500);
    digitalWrite(FAN,LOW);
    
  }

}
