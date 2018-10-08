#define led 7            //선언문

void setup() {
  pinMode(led, OUTPUT);  //뒤(loop)에서 이 핀을 쓸 것이라고 선언
}

void loop() {
  digitalWrite(led, HIGH); //7번 핀에 전기(5v)를 통하게 하는 스위치를 on
  delay(1000);             //1초간 대기
  digitalWrite(led, LOW);  //7번 핀에 전기(5v)를 통하게 하는 스위치를 off
  delay(1000);             //1초간 대기
}
