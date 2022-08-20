class Solution {
  public:
  
    int smallestSubstring(string S) {
        int len=S.length(), min_ans=-1, ans;
        int arr[3]={-1,-1,-1};
        
        int j=0;
        while(j<len){
            arr[S[j]-'0']=j;
            
            if(arr[0]!=-1 && arr[1]!=-1 && arr[2]!=-1){
                ans=max(max(arr[0], arr[1]), arr[2])-min(min(arr[0], arr[1]), arr[2])+1;
                
                if(min_ans==-1 || min_ans>ans)
                    min_ans=ans;
                
                if(arr[0]<arr[1] && arr[0]<arr[2])
                    arr[0]=-1;
                else if(arr[1]<arr[0] && arr[1]<arr[2])
                    arr[1]=-1;
                else
                    arr[2]=-1;
            }
            j++;
        }
        
        return min_ans;
    }
    
};
