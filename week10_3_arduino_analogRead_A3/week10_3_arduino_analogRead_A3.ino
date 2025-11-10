//week10_3_arduino_analogRead_A3
//把joystick的Y的線,經由麵包版幫忙,接到MakerUNO pin3
//不能接其他的,因為要接有~小蟲符號,代表analog訊號
void setup() {
  pinMode(2, INPUT_PULLUP);
  //pinMode(3,INPUT);//小蟲符號,代表analog訊號
  pinMode(8,OUTPUT);//發出聲音

}

void loop() {
  int now = analogRead(3);
  if( now > 800 ){ //變高
    tone(8,523,100);//發出523的DO
    delay(100);
    tone(8,784,100);//發出784的SO
    delay(200);//等久一點
  }else if( now < 200 )//變低
    tone(8,784,100);//發出784的SO
    delay(100);
    tone(8,523,100);//發出784的DO
    delay(200);
}
