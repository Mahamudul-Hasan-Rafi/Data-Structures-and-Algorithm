class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> vec;
        
        int sz=nums.size();
        for(int i=0; i<sz; i++){
            if(mp.find(target-nums[i])!=mp.end()){
                vec.push_back(i);
                vec.push_back(mp[target-nums[i]]);
                
                break;
            }
            mp[nums[i]]=i;
        }
        
        return vec;
    }
};
