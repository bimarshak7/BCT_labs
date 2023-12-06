#include <iostream>
using namespace std;

class Shape {
public:
		float value;
		Shape(float a){value=a;}
		virtual void peri()=0;
};

class Square:public Shape{
	public:	
		Square(float a):Shape(a){}
		void peri(){
			cout<<"Perimeter of Square is "<<4*value<<endl;
		}
};

class Circle:public Shape{
	public:
		Circle(float a):Shape(a){}
		void peri(){
			cout<<"Perimeter of Circle is "<<2*3.14*value<<endl;
		}
};

int main(){
	Shape *ptr;
	Square S(1.1);
	Circle C(7.7);
	S.peri();
	C.peri();
	return 0;
}