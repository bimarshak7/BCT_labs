//Selection sort
#include<iostream>
using namespace std;
void disp(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
void selection(int a[],int n){
	int tmp,min;
	for(int i=0;i<n;i++){
		min = i;
		for(int j=i;j<n;j++){
			if(a[j]<a[min]){
				min = j; 
			}
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}

int main(){
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter array elements..\n";
	int arr[n];
	int el;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<"th element: ";
		cin>>arr[i];
	}
	disp(arr,n);
	cout<<"Sorting..."<<endl;
	selection(arr,n);
	disp(arr,n);
}