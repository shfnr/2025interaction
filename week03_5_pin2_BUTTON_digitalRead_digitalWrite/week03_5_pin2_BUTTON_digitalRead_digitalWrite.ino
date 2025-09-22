//week03_5_pin2_BUTTON_digitalRead_digitalWrite
//手動按按鈕,看到燈慢慢改變NOW之後把NOW變亮
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP); //按鈕是二號,沒按下去就會拉高
  for(int i=3;i<=13;i++){  //把pin3,4,5,,,,,13都設成OUTPUT
    pinMode(i, OUTPUT); //都可以發光發亮的
  }
}
int now = 3; //現在發亮的是pin3
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==LOW){  //按下去囉
    now = now + 1;
    if(now>13) now = 3;
    for(int i=3;i<=13;i++){
      digitalWrite(i, LOW);  //全部先清空,變成LOW不亮
    }
    digitalWrite(now,HIGH);  //NOW負責亮
    delay(500); //休息一下,等0.5秒,才不會狂亂運作
  }
}
