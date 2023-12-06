#include<iostream>
#include<math.h>
#include<graphics.h>

using namespace std;

int main(){
    int x,y,p,x1,y1,x2,y2,d,Ix,Iy,dx,dy;

    cout<<"Enter (x1,y1) and (x2,y2) : ";
    cin>>x1>>y1>>x2>>y2;

    dx = abs(x2-x1);
    dy = abs(y2 - y1);
    
    if(x2>x1) //left to right
        Ix = 1;
    else    //right to left
        Ix = -1;
    if(y2>y1)   //top to bottom
        Iy = 1;
    else        //buttom to top
        Iy = -1;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    x = x1;
    y = y1;

    putpixel(x,y,RED);
    if(dx>dy){  //slope<1
        p = 2*dy - dx;
        for(int i=0;i<dx;i++){
            x += Ix;
            if(p<0){
                p += 2*dy;
            }
            else{
                y += Iy;
                p += 2*dy - 2*dx;
            }
            putpixel(x,y,RED);
        }
    }
    else{   //slope>1
        p = 2*dx - dy;
        for(int i=0;i<dy;i++){
            y += Iy;
            if(p<0){
                //x += 1;
                p += 2*dx;
            }
            else{
                //x += 1;
                x += Ix;
                p += 2*dx - 2*dy;
            }
            putpixel(x,y,RED);
        }
    }

    getch();
    closegraph();
    
    return 0;
}
