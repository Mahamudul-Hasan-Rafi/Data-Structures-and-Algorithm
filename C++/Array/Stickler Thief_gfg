class Solution
{
    public:
    int calculateSum(int arr[], int index, vector<int> &dp)
    {
        if(index==0)
            return arr[index];
        if(index<0)
            return 0;
        
        if(dp[index]!=-1)
            return dp[index];
        
        int l=arr[index]+calculateSum(arr, index-2, dp);
        int r=0+calculateSum(arr, index-1, dp);
        
        return dp[index]=max(l,r);
    }
    
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp(n,-1);
        
        return calculateSum(arr, n-1, dp);
    }
};
