#include<iostream>
using namespace std;
//int stack[10],n=10,top=-1,ch;

struct STACK{
    int n;
    int stack[n];
    int top;
};

void push(int x){
    if (stack.top<stack.n){
        stack.top++;
        stack.stack[stack.top]=x;
    }
    else{
        cout<<"Stack Overflow!!!"<<endl;
    }
}

void pop(){
    if (stack.top>-1){
        cout<<"Popped element: "<<stack.stack[stack.top]<<endl;
        stack.top--;
    }
    else
        cout<<"Stack Underflow"<<endl;
}
void isEmpty(){
    if (stack.top<0)
        cout<< "True\n";
    else
        cout<<"False\n";
}
void isFull(){
    if(stack.top==stack.n)
         cout<< "True\n";
    else
        cout<<"False\n";
}
int main(){
    int el;
    int ch;
    int n=5;
    STACK stack;
    stack.n=5;
    stack.top=-1;
    do{
        cout<<"Choose Stack operation\n";
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. isEmpty()\n";
        cout<<"4. isFull()\n";
        cout<<"Quit\n";
        cout<<"Enter choice: "; 
        cin>>ch;

        switch(ch){
            case 1: {
                        cout<<"Enter element to push: ";
                        cin >>el;
                        push(el);
                        break;
                }
            case 2:{
                        pop();
                        break;
                }
            case 3:{ 
                        isEmpty();
                        break;
                }
            case 4:{
                        isFull();
                        break;
                }
        }
    }while(ch<4);    
}
