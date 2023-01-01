class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        int low_a=0, high_a=n-1, mid_a, t;
        int low_b=0, high_b=n-2, mid_b;
        
        while(low_b<high_b){
            mid_b=(low_b+high_b)/2;
            t=low_a+high_a;
            mid_a=t/2+t%2;
            
            if(a[mid_a]==b[mid_b]){
                high_a=mid_a-1;
                high_b=mid_b-1;
            }
            else{
                low_a=mid_a;
                low_b=mid_b+1;
            }
        }
        
        if(a[low_a]==b[low_b])
            return high_a;
        return low_a;
    }
};
