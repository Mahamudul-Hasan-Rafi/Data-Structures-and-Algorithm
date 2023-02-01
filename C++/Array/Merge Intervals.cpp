class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();

        vector<vector<int>> vec;
        vector<int> temp;

        sort(intervals.begin(), intervals.end());
        
        temp.push_back(intervals[0][0]);
        temp.push_back(intervals[0][1]);

        for(int i=1; i<n; i++){
            if(temp[1]>=intervals[i][0]){
                if(temp[1]<intervals[i][1])
                    temp[1]=intervals[i][1];
            }
            else{
                vec.push_back(temp);
                temp.clear();
                temp.push_back(intervals[i][0]);
                temp.push_back(intervals[i][1]);
            }
        }

        vec.push_back(temp);

        return vec;
    }
};
