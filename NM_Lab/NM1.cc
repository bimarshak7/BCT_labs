#include<iostream>
#include<math.h>
using namespace std;
#define f(x) x*x - 4*x -10
int main(){
	float x0,x1,x2,e,f0,f1,f2;
	e = 0.00001;
	cout<<"Enter initial guesses x0 and x1: ";
	cin>>x1>>x2;
	f1 = f(x1);
	f2 = f(x2);
	while(f1*f2>0){
		cout<<"Inappropriate guesses, try again.\n";
		cout<<"Enter initial guesses x0 and x1: ";
		cin>>x1>>x2;
		f1 = f(x1);
		f2 = f(x2);
	}
	while(abs(x1-x2)>0){
		x0 = (x1+x2)/2;
		f0 = f(x0);
		if(f0*f1<0){
			x2=x0;
			f2=f0;
		}
		else{
			x1=x0;
			f1=f0;
		}
	}
	cout<<"Result: "<<x0<<endl;
 } 