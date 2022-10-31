class Solution{
    public:
    bool bSearch(int B[], int M, int x){
        int low=0;
        int high=M-1;
        int mid;
        
        while(low<high){
            mid=(low+high)/2;
            
            if(B[mid]==x)
                return true;
            else if(B[mid]<x)
                low=mid+1;
            else
                high=mid-1;
        }
        
        if(B[low]==x)
            return true;
        return false;
    }
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A, A+N);
        sort(B, B+M);
        
        vector<pair<int, int>> vec;
        pair<int, int> p;
        int num;
        
        for(int i=0; i<N; i++){
            if(A[i]<X)
                num=abs(A[i]-X);
            else
                num=X-A[i];
            if(bSearch(B, M, num)){
                p=make_pair(A[i], num);
                vec.push_back(p);
            }
        }
        
        return vec;
    }
};
