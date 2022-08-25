class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        vector<int> vec;
        
        int mid, low=0, high=n-1;
        sort(arr2, arr2+n);
        
        for(int i=0; i<m; i++){
             while(low<=high){
                 mid=(low+high)/2;
                 if(arr2[mid]<=arr1[i])
                    low=mid+1;
                 else
                    high=mid-1;
                    
             }
             
             vec.push_back(high+1);
             low=0;
             high=n-1;
        }
        
        return vec;
    }
};
