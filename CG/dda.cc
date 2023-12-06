#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;

int main(){
  int x1,y1,x2,y2,dx,dy;
  float x,y,step,x_inc,y_inc;

  cout<<"Enter values of (x1,y1) and (x2,y2) : ";
  cin>>x1>>y1>>x2>>y2;

  dx = x2 - x1;
  dy = y2 - y1;

  if (abs(dx)>abs(dy)) {
      step = abs(dx);
  }
  else{
  step = abs(dy);
  }

  int gd = DETECT,gm;
  initgraph(&gd,&gm,NULL);

  x = x1;
  y = y1;
  putpixel(x,y,RED);
  x_inc = dx/step;
  y_inc = dy/step;

  for(int i=0;i<step;i++){
    x = x + x_inc;
    y = y + y_inc;
    putpixel(x,y,RED);
  }
  getch();
  closegraph(); 

  return 0;
}
