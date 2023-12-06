#include <iostream>
using namespace std;
class Distance {
	int feet, inch;
	public:
		Distance (){
			feet=0;
			inch=0;
		}
		friend void operator >>(istream &, Distance &);
		friend void operator <<(ostream &, Distance &);
};

void operator >>(istream &in, Distance &dis){
	cout<<endl<<"enter data members of the objects:";
	in>>dis.feet;
	in>>dis.inch;
}

void operator <<(ostream &out, Distance &dis){
	cout<<"Data memebrs are:";
	out<<dis.feet<<"'";
	out<<dis.inch<<" '' ";
}

int main(){
	Distance d;
	cin>>d;
	cout<<d;
	return 0;
}

