class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr, arr+n);
        
        if(n==3)
            return 1?arr[0]+arr[1]>arr[2]:0;
        
        int i=0, j=n-2, k=n-1, count=0;
        while(k>1){
            while(i<j){
                if((arr[i]+arr[j])>arr[k]){
                    count+=(j-i);
                    j--;
                }
                else
                    i++;
            }
            k--;
            i=0;
            j=k-1;
        }
        
        return count;
    }
};
