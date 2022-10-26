class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int mx=0;
    int findMaxh(Node* root){
        if(root==NULL)
            return 0;
        
        int lh=findMaxh(root->left);
        int rh=findMaxh(root->right);
        
        mx=max(mx, lh+rh);
        
        return 1+max(lh, rh);
    }
    int diameter(Node* root) {
        findMaxh(root);
        return mx+1;
    }
};
