class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        if(n==1)
            return;
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0, j=n-1; i<j; i++,j--){
            for(int k=0; k<n; k++)
                swap(matrix[k][i], matrix[k][j]);
        }

        return;
    }
};
