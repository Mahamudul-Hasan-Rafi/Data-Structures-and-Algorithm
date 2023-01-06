class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> mp;
        int len = nums.size();

        int sum=0, max_len=0;
        for(int i=0; i<len; i++){
            if(nums[i]==0)
                sum+=-1;
            else
                sum+=1;
            
            if(sum==0){
                if(i+1>max_len)
                    max_len=i+1;
            }
            else if(mp.find(sum)!=mp.end()){
                if(i-mp[sum]>max_len)
                    max_len=i-mp[sum];
            }
            else{
                mp[sum]=i;
            }
        }

        return max_len;
    }
};
