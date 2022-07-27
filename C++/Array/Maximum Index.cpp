class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        vector<int> L_min(N);
        vector<int> R_max(N);
        
        int max_diff=-1;
        
        L_min[0]=A[0];
        for(int i=1; i<N; i++)
            L_min[i]=min(A[i], L_min[i-1]);                                                                                                                                                                                                                                                                                                                                           
        
        R_max[N-1]=A[N-1];
        for(int i=N-2; i>=0; i--)
            R_max[i]=max(A[i],R_max[i+1]);
        
        int j=0, k=0;
        while(j<N && k<N){
            if(L_min[j]<=R_max[k]){
                max_diff=max(max_diff, k-j);
                k+=1;
            }
            else
                j+=1;
        }
        
        return max_diff;
    }
};
