#include<iostream>
using namespace std;

typedef void(*fptr)(int, int);

void Add(int a, int b){
	cout<<a+b<<endl;
}
void Sub(int a, int b){
	cout<<a-b<<endl;
} 

int main(){
	fptr ptr;
	ptr=&Add;
	ptr(1,2);

	return 0;
}

/*
#include <iostream>  
using namespace std;  
int add(int x , int y)  
{  
    return x+y;  
}  
int main()  
{  
 int (*funcptr)(int,int);  // Declaration of function pointer
 funcptr=&add; // In this case we are pointing to the add function  

 int sum=funcptr(7,10);  
 std::cout << "Sum=" <<sum<< std::endl;  
  return 0;  
}  
*/
