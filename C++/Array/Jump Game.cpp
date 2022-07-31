class Solution {
  public:
    int canReach(int A[], int N) {
        int r=0;
        int i=0, curr=0;
        
        while(r<N-1){
            if(i>r)
                return 0;
            curr=i+A[i];
            if(curr>r)
                r=curr;
            i++;
        }
        
        return 1;
    }
};
