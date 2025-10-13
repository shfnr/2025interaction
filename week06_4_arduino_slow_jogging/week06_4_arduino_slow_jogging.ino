//week06_4_arduino_slow_jogging
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); //8 Buzzer
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8, 780, 60);  //自己決定聲音得Hz, pin8, 78Hz, 60ms
  delay(333);  //等0.33秒換下一次
  tone(8, 320, 60);//自己決定聲音得Hz, pin8, 78Hz, 60ms
  delay(333);  //等0.33秒換下一次
}  //每秒會叫三聲,60秒會叫180聲,180BPM(Beat Per Minute)
