class Solution
{
    public:
    Node *copyList(Node *head)
    {
        Node* temp = head;
        while(temp!=NULL){
            Node* node = new Node(temp->data);
            node->next = temp->next;
            temp->next = node;
            temp=temp->next->next;
        }
        
        temp=head;
        while(temp!=NULL){
            if(temp->arb==NULL)
                temp->next->arb=NULL;
            else
                temp->next->arb=temp->arb->next;
            
            temp=temp->next->next;
        }
        
        Node* head_ = head->next;
        temp=head;
        Node* f;
        while(temp!=NULL){
            f=temp->next->next;
            if(f==NULL)
                temp->next->next=NULL;
            else
                temp->next->next=f->next;
            temp->next=f;
            temp=temp->next;
        }
        
        return head_;
        
    }

};
