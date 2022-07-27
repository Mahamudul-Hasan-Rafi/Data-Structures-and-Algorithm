class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int temp=m, i=0, j=0, res=0;
        
        while(i<n){
           if(arr[i]==0){
               temp--;
           }
           
           if(temp<0){
               res=max(res,i-j);
               while(temp<0){
                   if(arr[j]==0) temp++;
                   j++;
               }
               i++;
           }
           else
               i++;
        }
        
        return max(res,i-j);
    }  
};
