//3
#include <iostream>
using namespace std;

class Employee {
	private:
		char name[30];
		char add[50];
		int age;
		double salary;
	public:
		void readdata (int n){
			cout<<"Enter Name, Address, Age and Salary of the employee "<<n<<endl;
			cin>>name>>add>>age>>salary;
		}
		void displaydata(){
			cout<<endl<<name<<"\t\t"<<add<<"\t\t"<<age<<"\t\t"<<salary<<endl;
		}
};

int main (){
	Employee emp[10];
	int i;
	for (i=0; i<10; i++)
		emp[i].readdata(i+1);
	cout<<endl<<"*******Record of Employee*********"<<endl;
	cout<<"Name\t\tAddress\t\tAge\t\tSalary";
	for (i=0; i<10; i++)
		emp[i].displaydata();
	return 0;
}

