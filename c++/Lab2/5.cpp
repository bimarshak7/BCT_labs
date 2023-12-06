//5
#include <iostream>
using namespace std;
class ABC;
class XYZ{
	int b;
	public:
 		void setvalue(int i){
		 	b=i;
	 	}
	friend void swap(ABC &, XYZ &);
	friend void sum (XYZ m, ABC n); //friend function
};
class ABC{
	int a;
	public:
 		void setvalue (int i){
	 	a=i;
		}
	friend void swap(ABC &, XYZ &);
	friend void sum (XYZ m, ABC n); //friend function
};
int main (){
	ABC abc;
	XYZ xyz;
	abc.setvalue(10);
	xyz.setvalue(20);
	swap(abc,xyz);
	sum (xyz, abc);
	return 0;
}
void sum (XYZ m, ABC n){
	int add;
	add= m.b+ n.a;
	cout<< "The sum is "<<add<<endl;
}
void swap(ABC &abc, XYZ &xyz){
	int tmp=abc.a;
	cout<<"Before swap"<<abc.a<<","<<xyz.b<<endl;
	abc.a=xyz.b;
	xyz.b=tmp;
	cout<<"After swap"<<abc.a<<","<<xyz.b<<endl;
}

