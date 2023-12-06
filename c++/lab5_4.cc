// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Base *bptr;
    //Base B;
    Derived D;
    bptr = &D;
    bptr->print();
    //((Derived*)bptr)->print();
    //OR 
    static_cast<Derived*>(bptr)->print();
    return 0;
}