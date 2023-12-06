#include<iostream>
using namespace std;

int main(){
	int n=4;//6;
	// float x[]={1.2,2.1,2.8,4.1,4.9,6.2};
	// float y[] = {4.2,6.8,9.8,13.4,15.5,19.6};

	float x[]={0,0.5,1,1.5};
	float y[] = {5,6,9,11};

	float xp = 10;//3.55;
	float p,yp=0;
	for(int i=0;i<n;i++){
		p=1;
		for(int j=0;j<n;j++){
			if(i!=j)
				p*=(xp-x[j])/(x[i]-x[j]);
		}
		yp +=p*y[i]; 
	}

	cout<<"Yp = "<<yp<<endl;
}