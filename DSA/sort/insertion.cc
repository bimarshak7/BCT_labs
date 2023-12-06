//Selection sort
#include<iostream>
using namespace std;
void disp(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void insertion(int a[],int n){
	int tmp,x;
	for(int i=1;i<n;i++){
		x = i;
		for(int j=i;j>=0;j--){
			if(a[x]<a[j]){
				tmp = a[j];
				a[j] = a[x];
				a[x] = tmp;
				x=j; 
			}
		}
		disp(a,n);
	}
}

int main(){
	int n=5;
	// cout<<"Enter size of array: ";
	// cin>>n;
	// cout<<"Enter array elements..\n";
	// int arr[n];
	// int el;
	// for(int i=0;i<n;i++){
	// 	cout<<"Enter "<<i+1<<"th element: ";
	// 	cin>>arr[i];
	// }
	int arr[] = {5,7,3,2,1};
	disp(arr,n);
	cout<<"Sorting..."<<endl;
	insertion(arr,n);
	cout<<endl;
	disp(arr,n);
}