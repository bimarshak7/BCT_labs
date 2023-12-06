#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;
void plot(float points[]){
    for(int i=0;i<6;i++)
        cout<<points[i]<<endl;
    for(int i=0;i<5;i+=2){
        line(points[i],points[i+1],points[i+2],points[i+3]);
    }
}
void plotRef(float pointsOld[], float pointsNew[]){
    for(int i=0;i<6;i+=2){
        line(pointsOld[i],pointsOld[i+1],pointsNew[i],pointsNew[i+1]);
    }
}
float* translate(float points[],int dx,int dy){
    static float newPoints[8];
    for(int i=0;i<7;i+=2){
        newPoints[i] = points[i] + dx;
        newPoints[i+1] = points[i+1] + dy;
    }
    return newPoints;
}

void rotate(float points[], float angle){
   float sn,cs;
    sn = sin(angle * M_PI/180);
    cs = cos(angle * M_PI/180);
    float tx,ty,cx=300,cy=300,x,y;
    for(int i=0;i<7;i+=2){
        tx = points[i] - cx;
        ty = points[i+1] - cy;
        points[i] = cx + floor(tx * cs - ty * sn);
        points[i+1] =  cy + floor(tx * sn + tx * cs);;
    }
    // for(int i=0;i<6;i+=2){       
    //     line(300,300,points[i],points[i+1]);
    // }
}

void scale(float points[][2], float sx, float sy){
    int tx,ty,cx=00,cy=200,x,y;
    for(int i=0;i<7;i+=2){
        tx = points[i] - cx;
        ty = points[i+1] - cy;
        points[i] = tx*sx + cx;
        points[i+1] = ty*sy + cy;
    }
}
int main() {
   int gd = DETECT, gm;

   initgraph(&gd, &gm, NULL);
   float triangle[8] = {300.0,300.0,200.0,300.0,300.0,200.0,300.0,300};
   // fillpoly(4,triangle);
   plot(triangle);
   delay(1000);
   float* newPoints;
   
   //translate
   newPoints = translate(triangle,-20.0, -50.0);
   // cleardevice();
   setcolor(RED);
   plot(newPoints);
   // for(int i=0;i<6;i+=2){
   //   cout<<newPoints[i]<<","<<newPoints[i+1];
   // }
   // fillpoly(4,newPoints);
   // plotRef(triangle,newPoints);
    //rotate
    rotate(triangle,90.0);
    setcolor(GREEN);
    plot(triangle);
   // fillpoly(4,triangle);
    //scale
   setcolor(BLUE);
   scale(triangle,2,2);
   plot(triangle);
   // fillpoly(4,triangle);
   getch();
   closegraph();
   return 0;
}
