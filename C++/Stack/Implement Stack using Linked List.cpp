#include<bits/stdc++.h>
using namespace std;

struct StackNode{
    int data;
    StackNode* next;

    StackNode(int x){
        data=x;
        next=NULL;
    }
};

class MyStack{
private:
    StackNode* top;

public:
    MyStack(){top=NULL;}
    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

void MyStack::push(int x){
    StackNode* node = new StackNode(x);

    if(top!=NULL)
        node->next=top;
    top=node;
}

int MyStack::pop(){
    if(top==NULL)
        return -1;
    int temp=top->data;
    top=top->next;

    return temp;
}

bool MyStack::isEmpty(){
    if(top==NULL)
        return true;
    return false;
}

int MyStack::peek(){
    if(top==NULL)
        return -1;
    return top->data;
}

int main()
{
    MyStack stck;

    stck.push(77);
    stck.push(96);
    stck.push(3);
    stck.push(55);
    stck.push(100);

    cout<<stck.pop()<<" popped"<<endl;

    cout<<stck.peek()<<" top element"<<endl;

    while(!stck.isEmpty()){
        cout<<stck.peek()<<" ";
        stck.pop();
    }

    return 0;
}
