#include<iostream>
using namespace std;
#define disp(a) for(int i=0;i<n;i++){for(int j=0;j<n+1;j++){cout<<a[i][j]<<"\t";}cout<<endl;}

int main(){
    int n=3;
    cout<<"Enter number of unknowns: ";
    cin>>n;
    float a[n][n+1];//={{1,-2,1,5},{2,-5,4,-3},{1,-4,6,10}};
    for(int i=0;i<n;i++){
       for(int j=0;j<n+1;j++){
           cout<<"Enter ("<<i+1<<","<<j+1<<")th element: ";
           cin>>a[i][j];
        }
    }
    cout<<"In matrix form/n";
    disp(a);
    float ratio;
    for(int k=0;k<n-1;k++){
        for(int i=k+1;i<n;i++){
            ratio = a[i][k] /a[k][k];
            for(int j=k;j<n+1;j++){
                a[i][j] = a[i][j] - ratio * a[k][j];
            }
        }
    }
    cout<<"\nReduced to upper triangular matrix"<<endl;
    disp(a);
    
    //Backward Substitution
    float X[n];
    X[n]=a[n-1][n]/a[n-1][n-1];
    for(int k=n-1;k>=0;k--){
        X[k]=a[k][n];
        for(int j=k+1;j<n;j++){
            X[k]=X[k]-a[k][j]*X[j];
        }
        X[k]=X[k]/a[k][k];
    }
    cout<<"\nResult\n";
    for(int i=0;i<n;i++){
        cout<<"x"<<i+1<<"= "<<X[i]<<"\t";
    }
    cout<<endl;
}
