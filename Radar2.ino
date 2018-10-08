#define trigPin 8
#define echoPin 7
#define buzzer 5
#define pin 6

long duration, distance;

void setup() {
    Serial.begin(9600);
    pinMode (trigPin, OUTPUT);
    pinMode (echoPin, INPUT);
    pinMode (buzzer, OUTPUT);
    pinMode (pin, OUTPUT);
    delay(1000);
    
    Serial.println("Radar Ready!");
    delay(500);
}

void loop() {
  
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  
  duration=pulseIn(echoPin,HIGH);
  distance=(duration/2)/29.1;
  
  Serial.print(distance);
  Serial.println("cm");
  
  if (distance==10){
    digitalWrite(buzzer, HIGH);
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    digitalWrite(pin, LOW);
    delay(1000);
  }
  
  else if(distance==20){
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
    delay(1000);
  }
  else{
    digitalWrite(buzzer, LOW);
    digitalWrite(pin, LOW);
    delay(1000);
  }
    
}
