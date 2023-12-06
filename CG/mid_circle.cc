#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

void plot(int x,int y,int xC,int yC){
    putpixel(x+xC,y+yC,GREEN);
    putpixel(y+xC,x+yC,GREEN);
    putpixel(-x+xC,y+yC,GREEN);
    putpixel(x+xC,-y+yC,GREEN);
    putpixel(y+xC,-x+yC,GREEN);
    putpixel(-y+xC,x+yC,GREEN);
    putpixel(-x+xC,-y+yC,GREEN);
    putpixel(-y+xC,-x+yC,GREEN);
}

int main(){
    int x,y,xC,yC,r,p;

    cout<<"Enter centre (xC,yC) and radius: ";
    cin>>xC>>yC>>r;
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
 
    x = 0;
    y = r;
    p = 1-r;
    plot(x,y,xC,yC);
    while(x<y){
        x = x+1;
        if(p<0){
        p += 2*x + 1;
        }
        else{
            y -= 1;
            p += 2*x - 2*y + 1;
        }
        cout<<x<<","<<y<<endl;
        plot(x,y,xC,yC);    
    }    
     getch();
     closegraph();

     return 0;
}
