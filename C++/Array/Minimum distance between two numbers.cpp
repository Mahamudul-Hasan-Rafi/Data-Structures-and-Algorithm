class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int x_pos=-1, y_pos=-1;
        int min_dist=-1;
        for(int i=0; i<n; i++){
            if(a[i]==x)
                x_pos=i;
            if(a[i]==y)
                y_pos=i;
            
            if(x_pos!=-1 && y_pos!=-1){
                if(min_dist==-1)
                    min_dist=abs(x_pos-y_pos);
                else{
                    if(abs(x_pos-y_pos)<min_dist)
                        min_dist=abs(x_pos-y_pos);
                }
            }
        }
        
        return min_dist;
    }
};
