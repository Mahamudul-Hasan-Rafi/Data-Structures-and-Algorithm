class Solution {
    // Function to find maximum product subarray
    long max(long a, long b){
        return a>b?a:b;
    }
    
    long min(long a, long b){
        return a<b?a:b;
    }
    
    long maxProduct(int[] arr, int n) {
        long ans=arr[0], mx=arr[0], mn=arr[0], temp;
        
        for(int i=1; i<n; i++){
            if(arr[i]<0){
                temp=mx;
                mx=mn;
                mn=temp;
            }
            
            mx=max(arr[i], mx*arr[i]);
            mn=min(arr[i], mn*arr[i]);
            
            if(mx>ans)
                ans=mx;
        }
        
        return ans;
    }
}
