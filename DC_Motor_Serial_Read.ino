void setup() {
  Serial.begin(9600);
}

int cnt =0;
byte bbb;
String msg="";
String myString;

void loop() {
  while (Serial.available()){ //통신 상대방이 Enter키를 치는 순간을 잡아내는 함수
    char myChar=(char)Serial.read();
    myString +=myChar;
    delay(05);
  }
  if (!myString.equals("")){
    Serial.println("Input Value :"+ myString);
    myString="";
  }
  cnt=Serial.read();
  bbb=byte(cnt++);
  msg=String(bbb);
  delay(3000);

}
