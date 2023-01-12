#include<bits/stdc++.h>
using namespace std;

class Queue{
    int front, rear, size, capacity;
    int* arr;

    public:
    Queue(int c){
        capacity=c;
        front=size=0;
        rear=capacity-1;
        arr=new int[capacity];
    }

    void enqueue(int x);
    int dequeue();
    int front_();
    int rear_();
    bool isEmpty();
    bool isFull();

};

void Queue::enqueue(int x)
{
    if(isFull()){
        cout<<"Queue Overflow!"<<endl;
        return;
    }

    rear=(rear+1)%capacity;
    arr[rear]=x;
    size++;

    return;
}

int Queue::dequeue()
{
    if(isEmpty()){
        cout<<"Queue Underflow!"<<endl;
        return -1;
    }

    int item=arr[front];
    front=(front+1)%capacity;
    size--;

    return item;
}

int Queue::front_()
{
    if(isEmpty())
        return -1;
    return arr[front];
}

int Queue::rear_()
{
    if(isEmpty())
        return -1;
    return arr[rear];
}

bool Queue::isEmpty()
{
    if(size==0)
        return true;
    return false;
}

bool Queue::isFull()
{
    if(size==capacity)
        return true;
    return false;
}


int main()
{
    Queue q(1000);

    q.enqueue(80);
    q.enqueue(55);
    q.enqueue(98);
    q.enqueue(123);
    q.enqueue(2);
    q.enqueue(8);

    cout<<q.front_()<<" front element "<<endl;
    cout<<q.rear_()<<" rear element "<<endl;

    cout<<q.dequeue()<<" Dequeued"<<endl;
    cout<<q.front_()<<" front element "<<endl;

    while(!q.isEmpty()){
        cout<<q.front_()<<" ";
        q.dequeue();
    }
    cout<<endl;

    return 0;
}
