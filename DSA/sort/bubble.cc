#include<iostream>
using namespace std;
void disp(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
void sort(int a[],int n){
	int tmp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				tmp = a[j];
				a[j]= a[j+1];
				a[j+1] = tmp; 
			}
		}
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
	sort(arr,n);
	disp(arr,n);
}