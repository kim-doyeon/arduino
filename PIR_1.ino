#define PIR 10
int LED=9;
int BUZZER=5;

void setup() {
    pinMode(PIR, INPUT);
    pinMode(LED, OUTPUT);
    pinMode(BUZZER, OUTPUT);
    Serial.begin(9600);
    Serial.println("Start");
}

void loop() {
    if(digitalRead(PIR)==HIGH){
      digitalWrite(LED, HIGH);
      digitalWrite(BUZZER, HIGH);
    }
    else{
      digitalWrite(LED, LOW);
      digitalWrite(BUZZER, LOW);
    }
    
    delay(200);
    
}
