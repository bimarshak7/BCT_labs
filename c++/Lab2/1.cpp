//1
#include <iostream>
using namespace std;
class Box{
	double len, bre, hei;
	public:
		Box(){
			len= 9.1;
			bre= 7.3;
			hei= 3.2;
		}
		void volume(){
			double vol;
			vol= len*bre*hei;
			cout<<"The volume of the box is: "<<vol<<".";
		}
};

int main(){
	Box B;
	B.volume();
	return 0;
}
