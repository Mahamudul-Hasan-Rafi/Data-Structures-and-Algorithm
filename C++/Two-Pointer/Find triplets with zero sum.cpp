class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        int sum=0, el;
        
        sort(arr,arr+n);
        
        for(int i=0; i<n-2; i++){
            el=(-1)*arr[i];
            int j=i+1, k=n-1;
            while(j<k){
                sum=arr[j]+arr[k];
                if(sum==el)
                    return true;
                else if(sum>el)
                    k--;
                else
                    j++;
            }
        }
        
        return false;
    }
};
