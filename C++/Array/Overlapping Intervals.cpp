class Solution {
public:

    static bool comparator(vector<int> a, vector<int> b){
        return a[0]<b[0];
    }
    
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         vector<vector<int>> v;
         vector<int> range;
         
         int n=intervals.size();
         
         sort(intervals.begin(), intervals.end(), comparator);
         
         int last_em=intervals[0][1];
         range.push_back(intervals[0][0]);
         for(int i=1; i<n; i++){
             if(intervals[i][0]<=last_em){
                 if(last_em<intervals[i][1])
                    last_em = intervals[i][1];
             }
             else{
                 range.push_back(last_em);
                 v.push_back(range);
                 
                 range.clear();
                 range.push_back(intervals[i][0]);
                 last_em=intervals[i][1];
             }
         }
         
         if(!range.empty()){
             range.push_back(last_em);
             v.push_back(range);
         }
         
         return v;
    }
};
