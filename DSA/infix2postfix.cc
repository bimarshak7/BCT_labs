#include<iostream>
#include<string>
#define SIZE 50
using namespace std;

class Stack{
    private:
        int top=-1;
        char stack[SIZE];
    public:
        Stack(){
        }
        void push(char x){
            if (top>SIZE){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                top++;
                stack[top]=x;
            }
        }
        void pop(){
            if(top<0)
                cout<<"Stack Underflow!!!"<<endl;
            else
                top--;
        }
        bool isFull(){
            if(top>SIZE)
                return true;
            else
                return false;
        }
        bool isEmpyty(){
            if (top==-1)
              return true;
            else
                return false;
        }
        char getTop(){
            if (top==-1){
                return '0';
            }
            else
                return stack[top];
        }
};
int prec(char opr){
    if(opr=='^')
        return 3;
    else if(opr=='*'||opr=='/')
        return 2;
    if(opr=='+'|| opr=='-')
        return 1;
    return -1;
}
string convert(string infix){
    Stack stack;
    string postfix;
    for(int i=0;i<infix.length();i++){
        char c=infix[i];
        if(c>='a'&&c<='z' || c>='A'&&c<='Z')
            postfix+=c;
        else if(c=='(')
            stack.push(c);
        else if(c==')'){
            while(stack.getTop()!='('){
                postfix+=stack.getTop();
                stack.pop();
            }
            stack.pop();
        }
        else{
            //cout<<c<<endl;
            while(!stack.isEmpyty()&&prec(c)<=prec(stack.getTop())){
                postfix+=stack.getTop();
                stack.pop();
            }
            stack.push(c);
        }
        //cout<<"Res: "<<postfix<<endl;
        //cout<<"ST: "<<stack.getTop()<<endl;
    }
    while(!stack.isEmpyty()){
        postfix+=stack.getTop();
        stack.pop();
    }
    return postfix;
}

int main(){
    string infix;
    cout<<"Enter infix expression: ";
    cin>>infix;
    string res = convert(infix);
    cout<<"Postix: "<<res<<endl;
    return 0;   
}