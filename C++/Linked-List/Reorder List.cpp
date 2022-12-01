class Solution{ 
public:
    Node* reverseList(Node* h){
        Node* prev=NULL;
        Node *curr=h, *next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        h=prev;
        return h;
    }
    void reorderList(Node* head) {
        int len=0;
        Node *temp=head, *midH;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        
        if(len<3)
            return;
            
        int mid=(len/2), n=0;
        temp=head;
        while(n<mid){
            temp=temp->next;
            n++;
        }
        Node* t=temp->next;
        temp->next=NULL;
        
        t = reverseList(t); 
        temp=head;
        midH = t->next;
        while(t!=NULL){
            t->next=temp->next;
            temp->next=t;
            temp=t->next;
            t=midH;
            
            if(midH!=NULL)
                midH=t->next;
        }
        
        return;
    }
};
