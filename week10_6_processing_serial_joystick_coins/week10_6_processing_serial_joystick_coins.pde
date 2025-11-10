//week10_6_processing_serial_joystick_coins
//利用USB Serial 傳 joystick的量,讓板子左右移動
import processing.serial.*;
Serial myPort;
void setup(){
   size(500,500);
   myPort = new Serial(this, "COM5", 9600);
   rectMode(CENTER);//四邊形政中心當成座標
}//預設左上角當作座標可改成正中心當作標
int x = 250,y=400,now;
float dx = 0;//移動的速度
void draw(){
  background(#FFFFA0);
  rect(x,y,100,20);
  if( myPort.available() > 0){
   now = myPort.read();
   dx = (now-127)/10.0;
   if(abs(dx)<0.2) dx = 0;
   println(dx);
 }
 x += dx;
}
