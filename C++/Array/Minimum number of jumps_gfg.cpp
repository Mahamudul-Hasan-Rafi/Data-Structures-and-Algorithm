class Solution{
  public:
    int minJumps(int arr[], int n){
        int dest=0, pos=0, jumps=0;
        
        if(n==1)
            return 0;
        
        for(int i=0; i<n-1; i++){
            if(arr[i]==0 && dest==(arr[i]+i))
                return -1;
            dest=max(dest, arr[i]+i);
            if(pos==i){
                pos=dest;
                jumps++;
            }
        }
        
        return jumps;
    }
};
