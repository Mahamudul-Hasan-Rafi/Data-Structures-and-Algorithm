class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        queue<pair<Node*, int>> q;
        map<int, int> mp;
        vector<int> vec;
        
        int d=0;
        q.push(make_pair(root, d));
        while(!q.empty()){
            Node* temp=q.front().first;
            d=q.front().second;
            
            if(temp->left!=NULL){
                q.push(make_pair(temp->left, d-1));
            }
            if(temp->right!=NULL){
                q.push(make_pair(temp->right, d+1));
            }
            
            q.pop();
            if(mp[d]==0)
                mp[d]=temp->data;
        }
        
        for(auto m=mp.begin(); m!=mp.end(); m++)
            vec.push_back(m->second);
        
        return vec;
    }

};
