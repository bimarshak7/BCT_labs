//WAP to illustrate the use of static member in a class.
#include<iostream>
using namespace std;

class A{
        static int c;//static var
        public:
                void getcount(){
                        c++;
                        cout<<"Count: ";
                        cout<<c<<endl;
                }
};
int A::c;
int main(){
        A a,b,c;
        a.getcount();
        b.getcount();
        c.getcount();
        a.getcount();
        return 0;
}
