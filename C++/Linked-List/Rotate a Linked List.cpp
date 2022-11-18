class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node* tail=head;
        while(tail->next)
            tail=tail->next;
        
        Node* temp;
        while(k--){
            temp=head;
            head=head->next;
            tail->next=temp;
            temp->next=NULL;
            tail=temp;
        }
        
        return head;
    }
};
    
