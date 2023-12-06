//6.	WAP which has two classes as your choice such that function members of one class use private members of another class.
#include <iostream>
using namespace std;
class alpha{
	private:
		int data;
	public:
		alpha():data(19){}
		friend class beta; //alpha makes the entire class beta friend
};
class beta{
	public:
	void funcA (alpha a)
	{	cout<<"Data is: "<<a.data<<endl;
	}
};
int main (){
	alpha a;
	beta b;
	b.funcA(a);
	return 0;
}
