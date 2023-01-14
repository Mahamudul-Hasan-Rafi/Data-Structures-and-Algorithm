#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next, *prev;

    Node(int x){
        data=x;
        next=prev=NULL;
    }
};

class MyStack{
    int cnt;
    Node* head, *mid;

    public:
    MyStack(){
        cnt=0;
        head=mid=NULL;
    }

    void push(int x){
        Node* t = new Node(x);
        if(head==NULL){
            head=t;
            mid=head;
        }
        else{
            t->next=head;
            head->prev=t;
            head=t;
        }
        cnt++;

        if(cnt%2==0){
            mid=mid->prev;
        }
    }

    int pop(){
        if(head==NULL)
            return -1;
        int d=head->data;
        head=head->next;
        cnt--;

        if(cnt%2)
            mid=mid->next;
        return d;
    }

    int mid_(){
        return mid->data;
    }

    void print(){
        Node* t=head;
        while(t!=NULL){
            cout<<t->data<<" ";
            t=t->next;
        }
        cout<<endl;
    }
};

int main()
{
    int no_of_operations, query, x;

    cout<<"Enter No of operations: ";
    cin>>no_of_operations;

    MyStack stck;

    while(no_of_operations--){
        cout<<"No of Query: ";
        cin>>query;

        if(query==1){
            cout<<"Enter an element: ";
            cin>>x;
            stck.push(x);
            stck.print();
        }
        else if(query==2){
            cout<<"Popped element: "<<stck.pop()<<endl;
            stck.print();
        }
        else if(query==3){
            cout<<"Mid element: "<<stck.mid_()<<endl;
            stck.print();
        }
        else{
            cout<<"Invalid choose"<<endl;
        }
    }

    return 0;
}
