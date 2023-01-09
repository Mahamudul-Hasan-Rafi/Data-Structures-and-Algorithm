class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> stck;
        vector<long long> vec;
        
        stck.push(arr[n-1]);
        vec.push_back(-1);
        
        for(int i=n-2; i>=0; i--){
            while(!stck.empty() && arr[i]>=stck.top()){
                stck.pop();
            }
            
            if(stck.empty()){
                vec.push_back(-1);
            }
            else
                vec.push_back(stck.top());
            
            stck.push(arr[i]);
        }
        
        reverse(vec.begin(), vec.end());
        
        return vec;
    }
};
