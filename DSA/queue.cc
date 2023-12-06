#include<iostream>
using namespace std;
#define size 5
class Queue{
    int arr[size];
    int front=size-1;
    int rear=size-1;
    
    public:
        Queue(){}
    
        bool q(int x){
            if(rear==size-1)
                rear=0;
            else
                rear++;
            if(rear==front){
                cout<<"Queue Overflow!";
                rear--;
                return false;
            }
            arr[rear] = x;
            return true;
        }
        bool dq(){
            if(front==rear){
                cout<<"Queue underflow!";
                return false;
            }
            if(front==size-1)
                front=0;
            else
                front++;
            return true;
        }
        bool empty(){
            if(front==rear)
                return true;
            else
                return false;
        }
        void peek(){
            if(empty())
                cout<<"Queue is empty."<<endl;
            else{
                int tmp = front==size-1?0:front+1;
                cout<<"First item: "<<arr[tmp]<<endl;
            }
        }

};

int main(){
Queue q;
cout<<"Choose Opr\n";
int ch;
menu:
do{
    cout<<"1. Q\n";
    cout<<"2. DQ\n";
    cout<<"3. Peek\n";
    cout<<"Choice: ";
    cin>>ch;
}while(ch>4);
int x;
switch(ch){
    case 1:{
            cout<<"Enter elem: ";
            cin>>x;
            q.q(x);
            break;
           }
    case 2: {
            q.dq();
            break;
            }
    case 3:
            q.peek();
            break;
    default:
            cout<<"Invalid choice!";
}
cout<<endl;
goto menu;
}
