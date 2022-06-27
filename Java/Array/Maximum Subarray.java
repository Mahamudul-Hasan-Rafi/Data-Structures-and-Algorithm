class Solution {
    
    //Kadane's Algorithm
        
    public int maxSubArray(int[] nums) {
        int len=nums.length;
        int sum=0;
        int ans=Integer.MIN_VALUE;
        
        for(int i=0; i<len; i++){
            sum=Math.max(sum+nums[i], nums[i]);
            ans=Math.max(ans, sum);
        }
        
        return ans;
    }
}
