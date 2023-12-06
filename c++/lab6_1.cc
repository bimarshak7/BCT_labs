#include<iostream>
using namespace std;

template <class T>
void swap(T&a,T&b)      //Function Template
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x1=4,y1=7;
    float x2=4.5,y2=7.5;

    cout<<"Before Swap:";
    cout<<"nx1="<<x1<<"ty1="<<y1;
    cout<<"nx2="<<x2<<"ty2="<<y2;

    swap(x1,y1);
    swap(x2,y2);

    cout<<"nnAfter Swap:";
    cout<<"nx1="<<x1<<"ty1="<<y1;
    cout<<"nx2="<<x2<<"ty2="<<y2;

    return 0;
}
