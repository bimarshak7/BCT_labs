 

#include <iostream>
using namespace std;


void myFunction(int test) throw(int, char, double)
{
  if(test==0) 
     throw test;                // throw int
  if(test==1) 
     throw 'a';                 // throw char
  if(test==2) 
     throw 333.23;              // throw double
}

int main()
{
  cout << "start\n";

  try{
    myFunction(0);                       
  }
  catch(int i) {
    cout << "Caught an integer\n";
  }
  catch(char c) { 
    cout << "Caught char\n";
  }
  catch(double d) { 
    cout << "Caught double\n";
  }

  try{
    myFunction(1);                       
  }
  catch(int i) {
    cout << "Caught an integer\n";
  }
  catch(char c) { 
    cout << "Caught char\n";
  }
  catch(double d) { 
    cout << "Caught double\n";
  }

  try{
    myFunction(2);                       
  }
  catch(int i) {
    cout << "Caught an integer\n";
  }
  catch(char c) { 
    cout << "Caught char\n";
  }
  catch(double d) { 
    cout << "Caught double\n";
  }


  cout << "end";

  return 0;
}