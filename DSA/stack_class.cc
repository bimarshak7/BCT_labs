#include<iostream>
#include<string>
#define SIZE 3
using namespace std;

template <class T> class Stack{
    private:
        int top=-1;
        int size;
        T* stack;
    public:
        Stack(int s=5){
            size =s;
            stack = new T[size];
        }

        void push(T x){
            if (top>SIZE){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                top++;
                stack[top]=x;
                cout<<x<<" pushed to stack"<<endl;
            }
        }
        void pop(){
            if(top<0)
                cout<<"Stack Underflow!!!"<<endl;
            else{
                cout<<"Popped element: "<<this->stack[this->top]<<endl;
                top--;
            }
        }
        void isFull(){
            if(top>SIZE)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        void isEmpyty(){
            if (top==-1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        T getTop(){
            if (top==-1){
                cout<<"Empty Stack ";
                return T();
            }
            else
                return stack[top];
        }
    void menu(){
        int ch;
        cout<<"1. Push\n2. Pop\n3. isFull\n4. isEmpyty\n5. GetTop"<<endl;
        do{
            cout<<"Enter operation: ";
            cin>>ch;
            T el;
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
                case 4:{
                        isEmpyty();  
                        break;
                }
                case 3:{
                        isFull();
                        break;
                }
                case 5:{
                    cout<<getTop()<<endl;
                    break;
                }
                default:
                       cout<<"Invalid choice!!"<<endl;
            }
        }while(ch<6);
    }

};


int main(){
int ch,s;
cout<<"Enter Stack SIze: ";
cin>>s;
cout<<"Chose data type for stack"<<endl;
cout<<"1. int\n2. float\n3. string"<<endl;
do{
            cout<<"Enter data type: ";
            cin>>ch;
            switch(ch){
                case 1: {
                        Stack<int> stack(s);
                        stack.menu();
                        break;
                }
                case 2:{
                        Stack<float> stack(s);
                        stack.menu();
                        break;
                }
                case 3:{
                        Stack<string> stack(s);
                        stack.menu();
                        break;
                }
                default:
                       cout<<"Invalid choice!!"<<endl;
            }
        }while(ch>3);
cout<<"Hey!"<<endl;
}
