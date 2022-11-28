class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    void inOrderTraversal(Node *root, vector<Node*> &vec){
        if(root==NULL)
            return;
        inOrderTraversal(root->left, vec);
        vec.push_back(root);
        inOrderTraversal(root->right, vec);
    }
    Node * bToDLL(Node *root)
    {
        vector<Node*> vec;
        inOrderTraversal(root, vec);
        
        Node* head = vec[0];
        Node* temp = head;
        int n = vec.size();
        for(int i=1; i<n; i++){
            vec[i]->left=temp;
            temp->right=vec[i];
            temp=vec[i];
        }
        temp->right=NULL;
        
        return head;
    }
};
