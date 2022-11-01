class Solution {
public:
    struct Node{
        int data;
        Node *left, *right;
        
        Node(int n){
            data=n;
            left=NULL;
            right=NULL;
        }
    };
    
    Node* convertArrayToBST(vector<int>& nums, int s, int e){
        if(s>e){
            return NULL;
        }
        int mid=(s+e)/2;
        
        Node* root=new Node(nums[mid]);
        
        root->left = convertArrayToBST(nums, s, mid-1);
        root->right = convertArrayToBST(nums, mid+1, e);
        
        return root;
    }
    
    void preorderTraverse(Node* root, vector<int>& vec){
        if(root==NULL)
            return;
        
        vec.push_back(root->data);
        preorderTraverse(root->left, vec);
        preorderTraverse(root->right, vec);
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        int len=nums.size();
        
        vector<int> vec;
        Node* root=convertArrayToBST(nums, 0, len-1);
        
        preorderTraverse(root, vec);
        return vec;
    }
};
