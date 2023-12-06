#include<iostream>
#include<graphics.h>

using namespace std;

int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
    cout<<getmaxx()<<","<<getmaxy()<<endl;
    
    int x=0;
    
   char ch;
  // for(int i=0;i<240;i++){
    while(true){ 
        line(7,440,635,440); //road
  
	//container
        setcolor(2);
        rectangle(400-x,280,600-x,400);
        bar(350-x,350,400-x,400);
        line(350-x,350,390-x,300);
        line(390-x,300,400-x,300);
        line(400-x,280,450-x,230);
        line(450-x,230,450-x,280);
        line(450-x,230,630-x,230);
        line(630-x,230,600-x,280);
        line(630-x,230,630-x,350);
        line(630-x,350,600-x,400);
        bar(300-x,390,350-x,400);
    	
        //mirror
    	line(355-x,250,375-x,215);
        circle(380-x,210,10);
        line(300-x,290,280-x,260);
        circle(273-x,253,10);
        
        setcolor(6);

        int points_bar[] = {300-x,390,340-x,360,340-x,330,300-x,360,300-x,390};
        fillpoly(5,points_bar);
        setcolor(15);

        line(340-x,360,400-x,360);
        arc(270-x,380,230,330,40); //wheel cover
        circle(270-x,380,30); //front wheel
        fillellipse(270-x, 380, 10, 10); //front wheel rim
        
        //rear wheel
        arc(500-x,410,-25,205,20);
        arc(500-x,410,-25,205,25);
        fillellipse(500-x,410,7,7);
        arc(550-x,390,20,140,25);
        fillellipse(550-x,402,3,3);
        
        //wheel support
        line(270-x,380,300-x,390);
        line(270-x,381,300-x,391);
        line(270-x,382,300-x,392);
     
       //handle
	int points_shk[] = {268-x,379,324-x,280,328-x,281,273-x,383,270-x,380};
        fillpoly(4,points_shk);
        int points_handle[] = {289-x,301,380-x,238,380-x,242,292-x,302,290-x,300}; 
        fillpoly(4,points_handle);
       
    
	
    //move or quit
        ch = getch();
        if(ch=='a')
            x++;
        else if(ch=='d')
            x--;
	if(ch=='q')
            break;
        
	delay(10);
    cleardevice();
   }
    closegraph();
    return 0;
}
