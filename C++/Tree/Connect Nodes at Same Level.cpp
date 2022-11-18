class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
      queue<Node*> q;
      q.push(root);
      int sz;
      
      while(!q.empty()){
          sz=q.size();
           
          while(1){
              Node* nd = q.front();
              q.pop();
               
              if(nd->left!=NULL)
                q.push(nd->left);
              if(nd->right!=NULL)
                q.push(nd->right);
                
              sz--;
              if(sz)
                nd->nextRight=q.front();
              else{
                  nd->nextRight=NULL;
                  break;
              }
          }
      }
       return;
    }    
      
};
