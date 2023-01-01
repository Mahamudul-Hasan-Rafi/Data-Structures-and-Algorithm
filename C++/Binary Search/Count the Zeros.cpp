class Solution{   
public: 
    int countZeroes(int arr[], int n) {
        int low=0, high=n-1;
        int mid;
        
        while(low<high && low!=high){
            mid=(low+high)/2;
            if(arr[mid]==1){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        
        if(arr[low]==0)
            return n-low;
        else
            return n-low-1;
    }
};
