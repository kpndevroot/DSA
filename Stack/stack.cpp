#include<iostream>
using namespace std;
#define MAX 10

int stack[MAX],top=-1;

// push function

void push(int x){
    if(top>=(MAX-1))
        cout<<"stack overflow"<<endl;
    else{
        stack[++top]=x;
        cout<<x<<" pushed in stack"<<endl;
    }
}
// pop function

void pop(){
    if(top<=-1)
        cout<<"stack underflow"<<endl;
    else{
        cout<<stack[top]<<" popped from stack"<<endl;
        top--;
    }
}
void display(){
    if(top>=0){
        cout<<"stack elements are \n"<<endl;
        for(int i=top;i>=0;i--){
            cout<<"| "<<stack[i]<<" |"<<endl;
           
        }
    }
    else
    cout<<"stack is empty"<<endl;

}
int main(){
    // pattern box variables
    
    int ch,stack_element;
    cout<<"1.push "<<endl<<"2.pop "<<endl<<"3.display"<<endl<<"4.exit"<<endl;
    do{

    
    cout<<"enter your choice : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"enter the stack element to want push into stack"<<endl;
        cin>>stack_element;
        push(stack_element);
        if(!(top>=(MAX-1)))
            display();
        break;                                                                                                        
    case 2:
        pop();
        if(!(top<=-1))
            display();
        break;
    case 3:
        display();
        break;
    default:
        cout<<"enter a valid choice"<<endl;
        break;
    }
    }while(ch!=4);

    return 0;
}