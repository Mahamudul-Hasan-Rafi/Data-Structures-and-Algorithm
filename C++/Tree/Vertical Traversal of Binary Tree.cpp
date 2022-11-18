class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        map<int, vector<int>> mp;
        queue<pair<Node*, int>> q;
        vector<int> vec;
        
        q.push(make_pair(root, 0));
        pair<Node*, int> temp;
        while(!q.empty()){
            temp=q.front();
            q.pop();
            
            if(temp.first->left!=NULL){
                q.push(make_pair(temp.first->left, temp.second-1));
            }
            if(temp.first->right!=NULL){
                q.push(make_pair(temp.first->right, temp.second+1));
            }
            
            mp[temp.second].push_back(temp.first->data);
        }
        
        for(auto m: mp){
            for(auto j: m.second)
                vec.push_back(j);
        }
        
        return vec;
    }
};
