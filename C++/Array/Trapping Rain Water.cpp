class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long trapped_water=0, l=0, r=n-1;
        int max_left=0, max_right=0;
       
        while(l<r){
            if(arr[l]<=arr[r]){
                if(arr[l]>=max_left)
                    max_left=arr[l];
                else
                    trapped_water+=(max_left-arr[l]);
                l++;
            }
            else{
                if(arr[r]>=max_right)
                    max_right=arr[r];
                else
                    trapped_water+=(max_right-arr[r]);
                r--;
            }
        }
        
        return trapped_water;
    }
};
