#define BUZ 8

void setup() {
    Serial.begin(9600);
    pinMode(BUZ, INPUT);
}

void loop() {
    int d=analogRead(A0);
    Serial.println(d);
    if(d>=200){
      digitalWrite(BUZ, HIGH);
    }
    else{
      digitalWrite(BUZ, LOW);
      delay(500);
    }
}
