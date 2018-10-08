const int AIA =3;
const int AIB =4;
const int BIA =5;
const int BIB =6;

byte speed =255;

void setup(){
  pinMode(AIA,OUTPUT);
  pinMode(AIB,OUTPUT);
  pinMode(BIA,OUTPUT);
  pinMode(BIB,OUTPUT);

  Serial.println("READY");
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

void up(){       //속도 빠르게. 최대 속도가 255인 이유는 8bit이기 때문에.
  speed++;
  if(speed>255){
    speed=255;
  }
  forward();
}

void down(){       //속도 느리게
  speed--;
  if(speed>120){
    speed=120;
  }
  forward();
}

void breeak(){       //멈춤
  speed=200;
  backward();
  delay(200);
  speed=0;
  forward();
}

void turbo(){       //터보
  speed=255;
  forward();
}
