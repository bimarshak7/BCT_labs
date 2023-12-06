#include<iostream>
#include<graphics.h>

using namespace std;

int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int x = 0;
   
   for(int i=0;i<250;i++){

        //paxadi ko pangro
        circle(x+100,340,40);
        circle(x+100,340,30);
        fillellipse(x+100,340,10,10);
        int mud[] = {x+95,280,x+45,310,x+40,320,x+90,290,x+95,285};
        fillpoly(5,mud);
        
        //agadi ko pangro
        circle(x+300,340,40);
        circle(x+300,340,30);
        fillellipse(x+300,340,10,10);
        arc(x+300,340,-160,-10,50);
        arc(x+300,341,-160,-10,50);

        ellipse(x+95,280,0,360,30,10);
        ellipse(x+170,285,0,360,50,20);
        ellipse(x+250,275,0,360,35,25);
        rectangle(x+140,300,x+230,350);
        ellipse(x+185,325,0,365,30,20);

        int shk[] = {x+300,345,x+280,244,x+285,250,x+310,340,x+300,345};
        fillpoly(5,shk);
        int handle[] = {x+230,210,x+330,280,x+340,285,x+235,205,x+230,210};
        fillpoly(5,handle);
        int shk2[] = {x+100,340,x+120,280,x+125,285,x+105,345,x+100,340};
        fillpoly(5,shk2);
       
        x++;
        delay(10);
        cleardevice();
    }
    getch();
    closegraph();

    return 0;
}
