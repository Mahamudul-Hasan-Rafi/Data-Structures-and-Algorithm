class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] freq=new int[102];
        int len=nums.length, sum=0;
        
        for(int i=0; i<len; i++){
            freq[nums[i]]++;
        }
        for(int i=0; i<102; i++){
            sum+=freq[i];
            freq[i]=sum;
        }
        
        for(int i=0; i<len; i++){
            if(nums[i]>0)
                nums[i]=freq[nums[i]-1];
        }
        
        return nums;
    }
}
