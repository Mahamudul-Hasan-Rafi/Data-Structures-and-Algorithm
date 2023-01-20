class Solution
{
public:
    vector<int> vec;
    
    void subsetSum(vector<int>& arr, vector<int>& container, int index, int n)
    {
        if(index==n){
            int sum=0;
            for(auto it: container)
                sum+=it;
            vec.push_back(sum);
            return;
        }
        
        container.push_back(arr[index]);
        subsetSum(arr, container, index+1, n);
        
        container.pop_back();
        subsetSum(arr, container, index+1, n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> container;
        
        subsetSum(arr, container, 0, N);
        return vec;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
