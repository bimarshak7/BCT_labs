#include<iostream>
using namespace std;

class Student{
	protected:
		int roll;
	public:
		void sget(){
			cout<<"Enter roll: ";
			cin>>roll;
		}
		void sput(){
			cout<<"\nROll: "<<roll;
		}
};

class Test:virtual public Student{
	protected:
		char name[50];
	public:
		void tget(){
			cout<<"Enter name: ";
			cin>>name;
		}
		void tput() {
			cout<<"\nName: "<<name;		
		}	
};
class Sports:virtual public Student{
	protected:
		float price;
	public:
		void ssget(){
			cout<<"Enter price ";
			cin>>price;
		}
		void ssput() {
			cout<<"\nPrice: "<<price;		
		}	
};
class Result:public Test, public Sports{
	float fee;
	public:
		void rget(){
			cout<<"Enter fee: ";
			cin>>fee;
		}
		void rput(){
			cout<<"\nFee: "<<fee<<endl;		
		}	
};
int main(){
	Result R;
	R.sget();
	R.tget();
	R.ssget();
	R.rget();

	R.sput();
	R.tput();
	R.ssput();
	R.rput();

	return 0;
}
