//week10_5_arduino_serial_joystick_to_processing
//修改自week10_4_arduino_serial_minitor_joystick_Serial_println
//但是不使用Serial.println()要改用Serial.write()0-1023vs0-255差四倍
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

void loop() {
  delay(30);//改慢一點才不會太粗糙,1000Hz/processing每秒60次
  int now = analogRead(A3)/4;//小心要除以四,才能順利由serial.write.()送出
  Serial.write(now);//把0-255數值傳出去
  if(now > 200) tone(8,784,100);
  if(now < 50) tone(8,523,100);
}