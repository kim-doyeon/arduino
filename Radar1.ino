#define trigPin 8
#define echoPin 7

long duration, distance;

void setup() {
    Serial.begin(9600);
    pinMode (trigPin, OUTPUT);
    pinMode (echoPin, INPUT);
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
    
}
