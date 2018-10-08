const int AIA =3;
const int AIB =4;
const int BIA =5;
const int BIB =6;

byte speed =255;

void setup(){         //void의 개념은 변수가 없다는 뜻으로 프로그래머가 설정하는대로 될 수 있다는 뜻. 함수에서 리턴하는 값이 없을 때 사용. void 키워드는 함수 선언에서만 쓰인다. 그것은 함수가 불릴 때 함수에서 아무 정보도 반환하지 않을 것을 기대하는 것을 가리킨다.
  pinMode(AIA,OUTPUT);
  pinMode(AIB,OUTPUT);
  pinMode(BIA,OUTPUT);
  pinMode(BIB,OUTPUT);
}

void loop(){
  forward();
  delay(2000);
  backward();
  delay(2000);
  
  left();
  delay(2000);
  right();
  delay(2000);
}

void backward(){
  analogWrite(AIA,0);
  analogWrite(AIB,speed);  
  analogWrite(BIA,0);
  analogWrite(BIB,speed);
}

void forward(){
  analogWrite(AIA,speed);
  analogWrite(AIB,0);  
  analogWrite(BIA,speed);
  analogWrite(BIB,0);
}

void left(){
  analogWrite(AIA,0);
  analogWrite(AIB,speed);  
  analogWrite(BIA,speed);
  analogWrite(BIB,0);
}

void right(){
  analogWrite(AIA,speed);
  analogWrite(AIB,0);  
  analogWrite(BIA,0);
  analogWrite(BIB,speed);
}
