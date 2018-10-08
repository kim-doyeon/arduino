void setup() {
    Serial.begin(9600);
}

void loop() {
    int val;
    val=analogRead(0); //0번 아날로그 포트에 연결하라는 뜻
    Serial.println(val, DEC);
    delay(100);
}
