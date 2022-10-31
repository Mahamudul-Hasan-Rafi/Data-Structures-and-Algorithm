class Solution
{
    public:
    bool flag=false;
    
    void findSum(Node *root, int S, int sum){
        if(root==NULL){
            return;
        }
        else
            sum+=root->data;
            
        if(root->left==NULL && root->right==NULL)
            if(sum==S)
                flag=true;
        findSum(root->left, S, sum);
        findSum(root->right, S, sum);
    }
    
    bool hasPathSum(Node *root, int S) {
        findSum(root, S, 0);
        return flag;
    }
};
