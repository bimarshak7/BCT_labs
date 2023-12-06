// acessing private, protected and public data members
#include <iostream>
using namespace std;
 class A{
	int a=1;
	protected:
		int b=2;
	public:
		int c=3;
		void d1(){
			cout<<"Private: "<<a<<endl; //acessing private member 
		}
};

class B:public A{
	public:
		void d2(){
			cout<<"Protected: "<<b<<endl; //acessing protected member from derived class
		}
};

int main(){
	B S;
	S.d1();
	S.d2();
	cout<<"Public: "<<S.c<<endl; //acessing public member outside the class

	return 0;
		
}
