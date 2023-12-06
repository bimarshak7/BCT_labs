//Program to  add two distance objects
#include<iostream>
using namespace std;

class Dist{
        private:
                float m,cm;
        public:
                void read(){
					cout<<"Enter m, cm: ";
					cin>>m>>cm;
                }
				void display(){
					cout<<m<<"m "<<cm<<"cm."<<endl;
				}
		friend void add(Dist a,Dist b);
};

int main(){
    Dist a,b;
	a.read();
	b.read();
	add(a,b);
    return 0;
}

void add(Dist a, Dist b){
	float m,cm;
	Dist c;
	c.m=a.m+b.m;
	c.cm=a.cm+b.cm;
	if (c.cm>100){
		c.m++;
		c.cm=c.cm-100;
	}	
	c.display();
}
