class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        vector<int> res;
        vector<int> l_min(N,0);
        vector<int> r_max(N,0);
        
        l_min[0]=arr[0];
        r_max[N-1]=arr[N-1];
        
        for(int i=1; i<N; i++)
            l_min[i]=min(arr[i],l_min[i-1]);
        for(int i=N-2; i>=0; i--)
            r_max[i]=max(arr[i],r_max[i+1]);
            
        for(int i=0; i<N; i++){
            if(arr[i]>l_min[i] && arr[i]<r_max[i]){
                res.push_back(l_min[i]);
                res.push_back(arr[i]);
                res.push_back(r_max[i]);
                
                break;
            }
        }
        
        return res;
    }
};
