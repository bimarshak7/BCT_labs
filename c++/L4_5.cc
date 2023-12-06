#include<iostream>
using namespace std;

class Parent{
	protected:
		char name[50], add[50];
	public:
		void getdata(){
			cout<<"Enter name, address";
			cin>>name>>add;
		}
		void putdata(){
			cout<<"Name: "<<name<<"\nAddress: "<<add;
		}
};

class child1:public Parent{
	protected:
		int roll;
		long phone;
	public:
		void get(){
			cout<<"Enter roll no and phone";
			cin>>roll>>phone;
		}
		void put() {
			cout<<"\nRoll no"<<roll;
			cout<<"\nPhone"<<phone;		
		}	
};
class child2:public child1{
	int age;
	float price;
	public:
		void takedata(){
			cout<<"Enter age and price";
			cin>>age>>price;
		}
		void display(){
			cout<<"\nAge: "<<roll;
			cout<<"\nPrice: "<<price<<endl;		
		}	
};
int main(){
	child2 C;
	C.getdata();
	C.get();
	C.takedata();
	C.putdata();
	C.put();
	C.display();

	return 0;
}
