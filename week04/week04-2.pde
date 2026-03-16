// week04-2 好玩的程式設計
// Ctrl-N
void setup(){
  size(800, 200);
}
void draw(){
  for (int x=0; x<800; x += 100) {
    if(x < mouseX && mouseX < x+100) fill(#4B49A0);
    else fill(#302CBC);
    rect( x, 0, 100, 100);
  }
}
