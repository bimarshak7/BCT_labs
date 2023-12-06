#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;

void triangle(float cords[][2]){
    line(cords[0][0],cords[0][1],cords[1][0],cords[1][1]);
    line(cords[1][0],cords[1][1],cords[2][0],cords[2][1]);
    line(cords[2][0],cords[2][1],cords[0][0],cords[0][1]);

}
void translate(float cords[][2],float dx,float dy){
    for(int i=0;i<3;i++){
        cords[i][0]+=dx;
        cords[i][1]+=dy;
    }
}

void rotate(float cords[][2],float cx,float cy,float angle){
        float sn,cs;
        sn = sin(1*(3.14/180));
        cs = cos(1*(3.14/180));

        for(float i=0;i<angle;i++){
            translate(cords,cx,cy);
            for(int i=0;i<3;i++){
                cords[i][0] = cords[i][0]*cs - cords[i][1]*sn;
                cords[i][1] = cords[i][0]*sn + cords[i][1]*cs; 
            }
            translate(cords,-1*cx,-1*cy);
        }
}

void scale(float cords[][2],float cx, float cy, float s){
    translate(cords,cx,cy);
    for(int i=0;i<3;i++){
        cords[i][0]*=s;
        cords[i][1]*=s;
    }
    translate(cords,-1*cx,-1*cy);
}
void clear(float cords[][2]){
    cleardevice();
    setcolor(WHITE);
    triangle(cords);
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    float cords[][2] = {{200,100},{175,175},{250,200}};
    float copy[3][2];
     memcpy (copy, cords, sizeof(cords));
    


    //translate
    clear(copy);
    setcolor(RED);
    translate(cords,20,30);
    triangle(cords);
    getch();
    
    //rotate
    clear(copy);
    setcolor(GREEN);
    rotate(cords,-200.0,-200.0,45.0);
    triangle(cords);
    getch();
    
    //scale
    clear(copy);
    setcolor(BLUE);
    scale(cords,-200.0,-200.0,2.0);
    triangle(cords);

    getch();
    closegraph();
   return 0;
}
