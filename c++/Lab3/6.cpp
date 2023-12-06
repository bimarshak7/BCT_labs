//WAP to overload increment operator (++) using member function.
#include <iostream>
using namespace std;
 
class Distance {
   private:
      float m;
      float cm; 
      
   public:
      Distance() {
         m = 0;
         cm = 0;
      }
      Distance(int x, int y) {
         m = x;
         cm = y;
      }
      void display(){
                cout<<m<<"m "<<cm<<"cm."<<endl;
                }
      
      // overloaded prefix ++ operator
      Distance operator++ () {
         ++cm;          // increment this object
         if(cm >= 100) {
            ++m;
            cm -= 100;
         }
         return Distance(m, cm);
      }
      
      // overloaded postfix ++ operator
      Distance operator++( int ) {
         Distance D_cp(m, cm);//duplicate original to return
         ++cm;                    
         if(cm >= 100) {
            ++m;
            cm -= 100;
         }
         
         return D_cp; 
      }
};

int main() {
   Distance D1(11, 159), D2(7,77);
  cout<<"Prefix ++"<<endl; 
   ++D1;                    
   D1.display();        
   D1++;               
  cout<<"Postfix ++"<<endl; 
   D1.display();      
 
   return 0;
}
