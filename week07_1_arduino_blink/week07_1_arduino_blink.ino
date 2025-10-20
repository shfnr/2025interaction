//week07_1_arduino_blink
//安裝好Select Board 要選剛剛裝置管理員的那個USB-Serial
//的Com3 or Com4 or Com5選好後,Board 打字Arduino Uno選它
void setup() {
  pinMode(13,OUTPUT);  //第13隻腳能送出資OUTPUT
}

void loop() {
  digitalWrite(13,HIGH);//發亮
  delay(500);
  digitalWrite(13,LOW);//暗掉
  delay(500);
}
