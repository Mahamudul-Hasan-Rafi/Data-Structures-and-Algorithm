class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int min_length=100005, sum=0;
        
        for(int i=0, j=-1; i<n; i++){
            sum+=arr[i];
            if(sum>x){
                while(sum>x){
                    j++;
                    sum-=arr[j];
                }
                
                if((i-j+1)<min_length){
                    min_length=i-j+1;
                }
            }
        }
        
        return min_length;
    }
};
