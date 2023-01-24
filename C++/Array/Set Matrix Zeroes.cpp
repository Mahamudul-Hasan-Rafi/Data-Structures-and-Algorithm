class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();

        vector<int> arr1(m, -1), arr2(n, -1);
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(!matrix[i][j]){
                    arr1[i]=0;
                    arr2[j]=0;
                }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!arr1[i] || !arr2[j])
                    matrix[i][j]=0;
            }
        }

        return;
    }
};
