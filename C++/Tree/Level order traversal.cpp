class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector<int> vec;
      
      if(node==NULL)
        return vec;
        
      queue<Node*> q;
      q.push(node);
      
      Node* curr;
      while(!q.empty()){
          curr=q.front();
          vec.push_back(curr->data);
          
          if(curr->left!=NULL)
            q.push(curr->left);
          if(curr->right!=NULL)
            q.push(curr->right);
            
          q.pop();
      }
      
      return vec;
    }
};
