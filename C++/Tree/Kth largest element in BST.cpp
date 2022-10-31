class Solution
{
    public:
    void inorderTraverse(Node *root, vector<int> &vec){
        if(root==NULL)
            return;
        inorderTraverse(root->left, vec);
        vec.push_back(root->data);
        inorderTraverse(root->right, vec);
    }
    
    int kthLargest(Node *root, int K)
    {
        vector<int> vec;
        inorderTraverse(root, vec);
        
        return vec[vec.size()-K];
    }
};
