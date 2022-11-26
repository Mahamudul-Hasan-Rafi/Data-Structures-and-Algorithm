class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* findMid(Node* head)
    {
        Node* tortoise = head;
        Node* hare = head->next;
        
        while(hare!=NULL && hare->next!=NULL){
            tortoise=tortoise->next;
            hare=hare->next->next;
        }
        
        return tortoise;
    }
    
    Node* merge(Node* left, Node* right)
    {
        if(left==NULL)
            return right;
        if(right==NULL)
            return left;
        
        Node* ans = new Node(-1);
        Node* t = ans;
        while(left!=NULL && right!=NULL){
            if(left->data<right->data){
                ans->next=left;
                ans=left;
                left=left->next;
            }
            else{
                ans->next=right;
                ans=right;
                right=right->next;
            }
        }
        
        while(left!=NULL){
            ans->next=left;
            ans=left;
            left=left->next;
        }
        
        while(right!=NULL){
            ans->next=right;
            ans=right;
            right=right->next;
        }
        
        return t->next;
    }
    
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        Node* mid = findMid(head);
        
        Node* left = head;
        Node* right = mid->next;
        
        mid->next = NULL;
        
        left=mergeSort(left);
        right=mergeSort(right);
        
        return merge(left, right);
        
    }
};
