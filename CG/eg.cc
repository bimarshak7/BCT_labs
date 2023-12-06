// C code to illustrate using
// graphics in linux environment
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);

	circle(30, 30, 10);

	delay(90000);
	closegraph();
	return 0;
}

