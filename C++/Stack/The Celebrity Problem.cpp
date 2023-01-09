class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    { 
        int celeb=0;
        for(int i=1; i<n; i++){
            if(M[celeb][i]==1)
                celeb=i;
        }
        
        for(int i=0; i<n; i++){
            if(i!=celeb){
                if(!M[i][celeb] || M[celeb][i])
                    return -1;
            }
        }
        
        return celeb;
    }
};
