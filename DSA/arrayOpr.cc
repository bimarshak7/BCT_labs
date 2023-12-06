#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"Enter initial size of array: ";
    cin>>s;
    int arr[s];
    int el;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<"th element: ";
        cin>>el;
        arr[i]=el;
    }
    int p;
    cout<<"Enter position and element to insert: ";
    cin>>p>>el;
    int arr_new[s+1];
    int ind=0;
    for(int i=0;i<s;i++){
        if(i==p){
            arr_new[i]=el;
            arr_new[i+1]=arr[i];
            ind++;
            continue;
        }
        arr_new[i+ind]=arr[i];
    }
    for(int i=0;i<s+1;i++){
        cout<<arr_new[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Enter position to delete element: ";
    cin>>p;
    ind=0;
    for(int i=0;i<s+1;i++){
        if(i==p){
            ind=1;
            continue;
        }
        arr[i-ind]=arr_new[i];
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
