#include <iostream>
using namespace std;
 
class base1
{
public:
  base1 (void)
  {
    cout << " constructor of class base1\n";
 
 
  }
   ~base1 ()
  {
      cout << " destructor of class base1\n";
  }
 
};
 
class base2
{
    
    public:
    base2(void)
    {
        cout << " constructor of class base2\n";
 
        
    }
    ~base2()
    {
        
        cout << " destructor of class base2\n";
 
    }
    
};
class derive1 : public base1, public base2 // illustration in multple illustration
{
    
    public:
    derive1(void)
    {
     cout << " constructor of class derive1\n";
 
    }
    ~derive1()
    {
        cout << " destructor of class derive1\n";
 
        
    }
};

class derive2 : public base2  // illustration in single illustration
{
    
    public:
    derive2(void)
    {
     cout << " constructor of class derive2\n";
 
    }
    ~derive2()
    {
        cout << " destructor of class derive2\n";
 
        
    }
}; 
int main ()
{
    cout<<"From derive1"<<endl;
    derive1 x;
    cout<<"From derive2"<<endl;
    derive2 y;
    cout << " Destructors are: "<<endl;
 
    return 0;
}
