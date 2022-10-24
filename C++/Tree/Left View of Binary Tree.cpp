void lView(Node *root, int level,  vector<int> &vec){
    if(root==NULL)
        return;
        
    if(level==vec.size()){
        vec.push_back(root->data);
    }
    
    lView(root->left, level+1, vec);
    lView(root->right, level+1, vec);
}

vector<int> leftView(Node *root)
{
   vector<int> vec;
   
   int level=0;
   lView(root, level, vec);
   
   return vec;
}
