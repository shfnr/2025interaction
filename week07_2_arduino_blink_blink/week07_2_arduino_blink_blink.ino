//week07_2_arduino_blink_blink
void setup() {
  pinMode(12,OUTPUT);//第12隻腳能送出資料OUTPUT
  pinMode(13,OUTPUT);  //第13隻腳能送出資料OUTPUT
}

void loop() {
  digitalWrite(12,LOW);//暗掉
  digitalWrite(13,HIGH);//發亮
  delay(500);
  digitalWrite(13,LOW);//暗掉
  digitalWrite(12,HIGH);//發亮
  delay(500);
}
