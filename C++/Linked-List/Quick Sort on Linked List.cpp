struct node* Partition(node *root, node *end){
    node* pivot=root;
    node* i=root;
    node* j=i->next;
    node* temp;
    
    while(j!=end){
        if(j->data<pivot->data){
            i=i->next;
            swap(i->data, j->data);
        }
        j=j->next;
    }
    
    swap(i->data, pivot->data);
    return i;
}

void QuickSortLinkedList(node *root, node *end){
    if(root!=end){
        node *p=Partition(root, end);
        QuickSortLinkedList(root, p);
        QuickSortLinkedList(p->next, end);
    }
}
void quickSort(struct node **headRef) {
    struct node *root=*headRef;
    node *end=NULL;
    QuickSortLinkedList(root, end);
    return;
}
