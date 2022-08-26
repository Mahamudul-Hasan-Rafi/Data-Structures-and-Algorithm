class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        int Lmin[n];
        int Rmax[n];
        
        Lmin[0]=arr[0];
        Rmax[n-1]=arr[n-1];
        for(int i=1; i<n; i++)
            Lmin[i]=min(Lmin[i-1],arr[i]);
        for(int i=n-2; i>=0; i--)
            Rmax[i]=max(Rmax[i+1],arr[i]);
            
        int maxdiff=-1;
        for(int i=0, j=0; i<n && j<n; ){
            if(Lmin[i]<=Rmax[j]){
                maxdiff=max(maxdiff, j-i);
                j+=1;
            }
            else
                i+=1;
        }
        
        return maxdiff;
    }                                     

};
