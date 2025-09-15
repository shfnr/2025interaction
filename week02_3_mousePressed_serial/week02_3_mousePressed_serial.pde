//week02_3_mousePressed_serial
import processing.serial.*;
Serial myPort; //第二行宣告USB的serial變數myPort
void mousePressed(){   //第二行宣告USB的Serial
  myPort.write(' ');   //第四行,mouse按下時,就送' '
}

void setup(){
  size(400,400);
  myPort = new Serial(this, "COM4", 9600); //第三行準備好UNO
} //剛剛你在Arduino裡設定COM多少就多少
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
