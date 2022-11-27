class Solution{
  public:
    //Function to merge K sorted linked list.
    Node* mergeTwoSortedLists(Node* l, Node* r)
    {
        if(l==NULL)
            return r;
        if(r==NULL)
            return l;
        
        Node* temp = new Node(-1);
        Node* ans = temp;
        while(l!=NULL && r!=NULL){
            if(l->data<r->data){
                temp->next = l;
                temp = l;
                l = l->next;
            }
            else{
                temp->next = r;
                temp = r;
                r = r->next;
            }
        }
        
        while(l!=NULL){
            temp->next = l;
            temp = l;
            l = l->next;
        }
        
        while(r!=NULL){
            temp->next = r;
            temp = r;
            r = r->next;
        }
        
        return ans->next;
    }
    
    Node * mergeKLists(Node *arr[], int K)
    {
          for(int i=0; i<K-1; i++){
              arr[i+1]=mergeTwoSortedLists(arr[i], arr[i+1]);
          }
          
          Node* t = arr[K-1];
          
          return t;
    }
};
