class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        static int a[2];
        
        for(int i=0; i<n; i++){
            if(arr[abs(arr[i])-1]<0){
                a[0]=abs(arr[i]);
            }
            else
                arr[abs(arr[i])-1]=(-1)*arr[abs(arr[i])-1];
        }
        
        for(int i=0; i<n; i++){
            if(arr[i]>0)
                a[1]=i+1;
        }
        
        return a;
    }
};
