//4
#include <iostream>
using namespace std;
class Distance{
	int meter, centi;
	public:
		void readdata(){
			cout<<"Enter meter value: ";
			cin>>meter;
			cout<<"Enter centimeter value: ";
			cin>> centi;	
		}
		void display(){
			cout<<"The distance is "<<meter<<"."<<centi<<"m."<<endl;
		}
		friend void sum (Distance a, Distance b);
};

int main(){
	Distance a, b;
	a.readdata();
	b.readdata();
	a.display();
	b.display();
	sum(a, b);
	return 0;
}

void sum (Distance a, Distance b){
	cout<< "Sum of distance: "<<a.meter+b.meter<<"m and "<<a.centi+b.centi<<"cm."<<endl;
}
