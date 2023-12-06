//WAP to illustrate static member function
#include<iostream>
using namespace std;

class A{
        static int c;//static var
        int ct;
        public:
                void set(){
                        ++c;
                        //cout<<c;
                        ct=c;
                }
                static void getcount(){
                        cout<<"Count: "<<c<<endl;
                }
                void get(){
                        cout<<"Obj no.:: "<<ct<<endl;
                }
};
int A::c;
int main(){
        A a,b;
        a.set();
        b.set();

        //A::getcount();
        A::getcount();
        A c;

        c.set();
        A::getcount();

        a.get();
        b.get();
        c.get();
        return 0;
}
