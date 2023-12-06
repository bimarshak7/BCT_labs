//WAP as your choice to use this pointer to return an object of class from a member function of class.
#include<iostream>
using namespace std;

class Vol
{
	int l,b,h;
	public:
		Vol(){
			l=0;
			b=0;
			h=0;
		}
		Vol(int x, int y,int z)
		{
			l=x;
			b=y;
			h=z;
		}
		void display()
		{
			cout<<"Vol : "<<l*b*h<<endl;
		}
		Vol return_obj()
		{
			Vol V;
			V = *this;
			return V;
		}
};


int main()
{
	Vol V1(5,4,3),V2;
	V1.display();
	V2 = V1.return_obj();
	V2.display();
	
	return 0;
}

