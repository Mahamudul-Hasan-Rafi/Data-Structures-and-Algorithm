#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class MyStack{
    int top;
    int a[MAX];

public:

    MyStack(){
        top=-1;
    }

    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};

void MyStack::push(int x){
    if(isFull())
        cout<<"Stack Overflowed"<<endl;
    else
        a[++top]=x;
}

int MyStack::pop(){
    if(isEmpty()){
        cout<<"Stack Empty!!"<<endl;
        return -1;
    }
    return a[top--];
}

int MyStack::peek(){
    if(isEmpty()){
        cout<<"Stack Empty!!"<<endl;
        return -1;
    }
    return a[top];
}

bool MyStack::isFull(){
    if(top==MAX-1)
        return true;
    return false;
}

bool MyStack::isEmpty(){
    if(top==-1)
        return true;
    return false;
}

int main()
{
    MyStack stck;

    stck.push(45);
    stck.push(50);
    stck.push(100);
    stck.push(5);
    stck.push(30);

    cout<<stck.pop()<<" popped"<<endl;

    cout<<stck.peek()<<" top element"<<endl;

    while(!stck.isEmpty()){
        cout<<stck.peek()<<" ";
        stck.pop();
    }
    cout<<endl;

    return 0;
}
