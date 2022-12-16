#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class Stack{

    public:
        int stack[MAX],top=-1;


        void push(int x);
        void pop();
        void display();
};
void Stack::push(int x){
    if(top>=(MAX-1))
        cout <<"STACK OVERFLOW \n";
    else{
        stack[++top] = x;
        cout<<x<<" pushed inside the stack"<<endl;
    }
}
void Stack::pop(){
    if(top<=-1)
        cout<<"STACK UNDERFLOW \n";
    else{
        cout<<stack[top]<<" pushed outside the stack"<<endl;
        top--;
    }

}
void Stack::display(){
    if(top>=0)
      {
        cout<<"Stack Element Are \n";
        for(int i=top; i>=0;i--){
            cout<<"| "<<stack[i]<<" |"<<endl;
        }
      }
    else
        cout<<"STACK  IS EMPTY \n";
}
int main(){
    int stack_element,choice;
    Stack S ;
    do{
        cout<<"\n 1.push \n 2.pop \n 3.display \n 4.exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1: 
               cout<<"enter the stack element your want to push :";
               cin>>stack_element;
               S.push(stack_element);
               if(!(S.top>=(MAX-1)))
                    S.display();
                break;
            case 2:
                S.pop();
                if(!(S.top<=-1))
                    S.display();
                break;

            case 3:
                S.display();
                break;

            case 4:
                cout<<"exit \n";
                break;

            default:
                cout<<"invalid choice \n";
                break;

        }
    }while(choice!=4);



    return 0;
}