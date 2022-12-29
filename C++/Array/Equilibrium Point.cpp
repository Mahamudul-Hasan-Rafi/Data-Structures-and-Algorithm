class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int i=0, j=n-1;
        long long b_sum=0, a_sum=0;
        
        if(n==1)
            return 1;
        else if(n==2)
            return -1;
        else{
            b_sum+=a[i];
            a_sum+=a[j];
            while(i<j){
                if(b_sum>a_sum){
                    j--;
                    a_sum+=a[j];
                }
                else if(a_sum>b_sum){
                    i++;
                    b_sum+=a[i];
                }
                else{
                    i++;
                    j--;
                    if(i==j)
                        return i+1;
                    b_sum+=a[i];
                    a_sum+=a[j];
                }
            }
            
            return -1;
        }
    }

};
