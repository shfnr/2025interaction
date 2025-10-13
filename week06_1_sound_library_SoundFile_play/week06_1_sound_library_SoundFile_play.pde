//week06_1_sound_library_SoundFile_play
//File-Preference字型改大一點
//Sketch-library-ManageLibraries,找sound安裝他
//File-Examples-Libraries核心函式庫-Sound-soundfile-SimplePlayback
//這個範例有聲音,有相關的函式可學習參考
import processing.sound.*; //使用聲音的外掛模組
SoundFile sound; //宣告SoundFile物件變數
void setup(){
  size(500,400);//視窗大小
  sound = new SoundFile(this, "music.mp3");
  //老師把mp3傳給你,你把她拉到程式
  sound.play(); //播放聲音
}
void draw(){
  
}
