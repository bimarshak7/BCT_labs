#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main(){
    int gd = DETECT, gm;

    int x1,y1,x2,y2,step,dx,dy,i;
    float x_inc, y_inc,x,y;


    x1 = 100;
    y1=200;
    x2 = 500;
    y2 = 300;
    
    initgraph(&gd,&gm,NULL);

    dx = x2 - x1;  
    dy = y2 - y1;
    y = y1;
    x = x1;
    if(abs(dy)>abs(dx))
        step = abs(dy);
    else
        step = abs(dx);
    x_inc = dx/(float)step;
    y_inc = dy/(float)step;
    
    for(i=0;i<step;i++){
        x = x + x_inc;
        y = y + y_inc;
        putpixel(x+0.5,y+0.5,RED);
    }
    getch();
    closegraph();
    return 0;

}
