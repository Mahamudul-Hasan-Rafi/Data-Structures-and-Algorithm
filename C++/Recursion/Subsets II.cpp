class Solution {
public:
    vector<vector<int>> vec;

    void subsets(vector<int>& nums, vector<int>& list, int index, int n)
    {
        if(index==n){
            if(find(vec.begin(), vec.end(), list)==vec.end())
                vec.push_back(list);
            return;
        }

        list.push_back(nums[index]);
        subsets(nums, list, index+1, n);

        list.pop_back();
        subsets(nums, list, index+1, n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> list;
        sort(nums.begin(), nums.end());
        subsets(nums, list, 0, nums.size());   
        return vec; 
    }
};
