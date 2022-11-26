Node* mergeSortedList(Node* l, Node* r)
{
    Node* ans=new Node(-1);
    Node* t=ans;
    while(l!=NULL && r!=NULL)
    {
        if(l->data<r->data){
            ans->bottom=l;
            ans=l;
            l=l->bottom;
        }
        else{
            ans->bottom=r;
            ans=r;
            r=r->bottom;
        }
    }
    
    while(l!=NULL){
        ans->bottom=l;
        ans=l;
        l=l->bottom;
    }
    while(r!=NULL){
        ans->bottom=r;
        ans=r;
        r=r->bottom;
    }
    
    return t->bottom;
}

Node *flatten(Node *root)
{
   Node* h=root;
   Node* t;
   while(h->next){
       t=h->next->next;
       h=mergeSortedList(h, h->next);
       h->next=t;
   }
   
   return h;
}
