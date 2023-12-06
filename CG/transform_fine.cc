#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;

void plot(float p[][2]){
	line(p[0][0],p[0][1],p[1][0],p[1][1]);
	line(p[1][0],p[1][1],p[2][0],p[2][1]);
	line(p[2][0],p[2][1],p[0][0],p[0][1]);

}

void translate(float p[][2],float diff[]){
	for(int i=0;i<3;i++){
		p[i][0]+=diff[0];
		p[i][1]+=diff[1];
	}
}

void rotate(float p[][2],float center[2],float  dir){
		// for(int i=0;i<3;i++)
		// 	cout<<p[i][0]<<","<<p[i][1]<<endl;
		// cout<<"After"<<endl;
		translate(p,center);
		float sn,cs;
		sn = sin(dir*(3.14/180));
		cs = cos(dir*(3.14/180));

		for(int i=0;i<3;i++){
			p[i][0] = p[i][0]*cs - p[i][1]*sn;
			p[i][1] = p[i][0]*sn + p[i][1]*cs; 
		}
		center[0] *= -1;
		center[1] *= -1;
		translate(p,center);
		// for(int i=0;i<3;i++)
		// 	cout<<p[i][0]<<","<<p[i][1]<<endl;
}
void scale(float p[][2],float center[],float ds){
	//cout<<ds<<endl;
	translate(p,center);
	for(int i=0;i<3;i++){
		p[i][0]*=ds;
		p[i][1]*=ds;
	}
	center[0] *= -1;
	center[1] *= -1;
	translate(p,center);
}

int main(){
	int gd = DETECT, gm;
   initgraph(&gd, &gm, NULL);
   
   float points[][2] = {{300,200},{250,250},{350,300}};
   plot(points);
   float dp[2] = {0.0,0.0};
   float ds = 1.0;
   char ch;
  // dp[0] = -250;
  // dp[1] = -250;
  // rotate(points,dp);
  //  plot(points);
  // getch();
   
   while(true){
	   ch = getch();
	   if(ch=='q')
		   break;

	   if(ch=='w' || ch=='a' || ch=='s' || ch=='d'){
	   		if (ch=='w')
	   	   	dp[1] = -1.0;
	   	   if (ch=='s')
	   	   	dp[1] = 1.0;
	   	   if (ch=='a')
	   	   	dp[0] = -1.0;
	   	   if (ch=='d')
	   	   	dp[0] = 1.0;
	   	 translate(points,dp);
	   	}

	   	dp[0] = -250;
	   	dp[1] = -250;
	   	if(ch=='r'){
	   		rotate(points,dp,1.0);
	   	}
	   	if(ch=='t'){
	   		rotate(points,dp,-1.0);
	   	}
	   	if(ch=='x' || ch=='z'){
	   		if (ch=='z')
	   			ds *= 0.9;
			else
	   			ds *= 1.1;
	   		scale(points,dp,ds);
	   	}
	   dp[0] = 0.0;
	   dp[1] = 0.0;
	   cleardevice();
	   plot(points);
   }

   closegraph();
}
