#include<iostream>
#include<graphics.h>

using namespace std;

int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int x = 100;    
for(int i=0;i<100;i++){
    //rear wheel
    circle(x,300,70);
    circle(x,300,60);
    fillellipse(x,300,10,10);
    
    //front wheel
    circle(x+300,300,70);
    circle(x+300,300,60);
    fillellipse(x+300,300,10,10);

    bar(x-5,297,x+150,303);
    circle(x+150,300,20);
    circle(x+150,300,10);
    int support[] = {x-5,297,x+80,190,x+84,192,x-1,300,x-5,297};
    fillpoly(5,support);
    
    int support2[] = {x+150,303,x+60,172,x+70,172,x+156,304,x+150,303};
    fillpoly(5,support2); //seat support
    
    bar(x+80,190,x+260,194);

    bar(x+40,165,x+90,170); //seat

    int support3[] = {x+300,290,x+250,155,x+244,154,x+294,296,x+300,300};
    fillpoly(5,support3);
    int support4[] = {x+150,300,x+260,185,x+265,188,x+155,304,x+150,300};
    fillpoly(5,support4);

    //pedals
    int pedal[] = {x+150,300,x+190,330,x+195,330,x+155,300,x+150,300};
    fillpoly(5,pedal);
    bar(x+180,330,x+205,335);
    
    //handle
    int handle[]= {x+280,180,x+190,100,x+200,104,x+290,185,x+280,180};
    fillpoly(5,handle);
    x++;
    delay(10);
    cleardevice();
}
    getch();
    closegraph();
    
    return 0;
}
