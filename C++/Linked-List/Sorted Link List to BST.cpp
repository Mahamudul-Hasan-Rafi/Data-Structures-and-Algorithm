class Solution{
  public:
    LNode* findMiddle(LNode* head, LNode* tail)
    {
        LNode* t=head;
        LNode* h=head->next->next;
        while(h!=tail && h->next!=tail){
            t=t->next;
            h=h->next->next;
        }
        
        return t->next;
    }
    TNode* formBST(LNode* head, LNode* tail)
    {
        TNode* n;
        if(head==tail)
            return NULL;
        if(head->next==tail){
            n = new TNode(head->data);
            return n;
        }
        
        LNode* mid = findMiddle(head, tail);
        n = new TNode(mid->data);
        n->left = formBST(head, mid);
        n->right = formBST(mid->next, tail);
        
        return n;
    }
    TNode* sortedListToBST(LNode *head) {
        return formBST(head, NULL);
    }
};
