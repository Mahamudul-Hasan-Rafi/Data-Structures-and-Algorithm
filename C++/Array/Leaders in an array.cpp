class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> vec;
        int leader=a[n-1];
        
        vec.push_back(leader);
        for(int i=n-2; i>=0; i--){
            if(a[i]>=leader){
                leader=a[i];
                vec.push_back(leader);
            }
        }
        
        reverse(vec.begin(), vec.end());
        
        return vec;
    }
};
