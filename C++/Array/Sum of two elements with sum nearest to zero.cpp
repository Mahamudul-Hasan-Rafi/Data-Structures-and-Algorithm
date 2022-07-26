class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            int sum, i, j, s;
            
            sort(arr,arr+n);
            
            i=0, j=n-1;
            sum=INT_MAX;
            while(i<j){
                s=arr[i]+arr[j];
                
                if(abs(s)<abs(sum)){
                    sum=s;
                }
                else{
                    if(abs(s)==abs(sum))
                        sum = max(s,sum);
                }
                if(s<=0)
                    i++;
                else
                    j--;
            }
            
            return sum;
        }
};
