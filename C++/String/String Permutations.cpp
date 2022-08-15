class Solution{
    public:
    //Complete this function
    
    void permute(string S, int l, int r, vector<string> &v)
    {
        if(l==r){
            v.push_back(S);
            return;
        }
        
        sort(S.begin()+l, S.end());
        
        for(int i=l; i<=r; i++){
            swap(S[i], S[l]);
            permute(S, l+1, r, v);
            swap(S[i], S[l]);
        }
    }
    
    vector<string> permutation(string S)
    {
        int len=S.length();
        int l=0, r=len-1;
        
        vector<string> vec;
        permute(S,l,r, vec);
        
        return vec;
    }
};
