class Solution {
    int findMaxSum(int arr[], int n) {
        // code here
        int include=arr[0], exclude=0, temp;
        
        for(int i=1; i<n; i++){
            temp=exclude;
            exclude=include>exclude?include:exclude;
            include=arr[i]+temp;
        }
        
        return include>exclude?include:exclude;
    }
}
