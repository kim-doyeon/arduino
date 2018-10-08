#define LED 10
#define BUZ 11

void setup(){
  Serial.begin(9600);
  Serial.println("start");
  
  pinMode(LED, OUTPUT);
  pinMode(BUZ, OUTPUT);
}

void loop(){
  char d45;
  
  if(Serial.available()){
    d45=Serial.read();
    
    if(d45=='L'){
      digitalWrite(LED, HIGH);
      delay(1000);
      digitalWrite(LED, LOW);
    }
    
    if(d45=='B'){
      digitalWrite(BUZ, HIGH);
      delay(1000);
      digitalWrite(BUZ, LOW);
    }
    Serial.println(d45);
  }
}
