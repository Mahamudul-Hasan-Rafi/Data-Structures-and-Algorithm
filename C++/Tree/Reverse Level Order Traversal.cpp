vector<int> reverseLevelOrder(Node *root)
{
    queue<Node*> q;
    vector<int> vec;
    
    if(root==NULL)
        return vec;
    
    q.push(root);
    Node* temp;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        
        vec.push_back(temp->data);
        
        if(temp->right!=NULL)
            q.push(temp->right);
        if(temp->left!=NULL)
            q.push(temp->left);
    }
    
    reverse(vec.begin(), vec.end());
    return vec;
}
