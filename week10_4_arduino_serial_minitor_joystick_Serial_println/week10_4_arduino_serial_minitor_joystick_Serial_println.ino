//week10_4_arduino_serial_minitor_joystick_Serial_println
//修改自week10_3_arduino_analogRead_A3
//把joystick的Y的線,經由麵包版幫忙,接到MakerUNO pin3
//不能接其他的,因為要接有~小蟲符號,代表analog訊號
void setup() {
  Serial.begin(9600);//開啟usb傳輸
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);//發出聲音
}

void loop() { //一秒鐘會跑1000Hz太快了要慢一點才行
  delay(100);//慢一點避免processing來不及處理眼睛看不到
  int now = analogRead(A3);
  Serial.println(now);
  //想利用Serial Monitor 來看看會送出甚麼訊號

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
