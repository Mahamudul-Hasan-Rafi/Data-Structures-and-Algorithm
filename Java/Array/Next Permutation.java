class Solution{
    static List<Integer> nextPermutation(int N, int arr[]){
        List<Integer> lst = new ArrayList<>();
        
        int index=-1, temp;
        for(int i=N-1; i>0; i--){
            if(arr[i]>arr[i-1]){
                index=i-1;
                break;
            }
        }
        
        if(index==-1 || N<3){
            for(int i=N-1; i>=0; i--)
                lst.add(arr[i]);
        }
        else{
            for(int i=N-1; i>index; i--){
                if(arr[i]>arr[index]){
                    temp=arr[i];
                    arr[i]=arr[index];
                    arr[index]=temp;
                    
                    break;
                }
            }
            
            for(int i=0; i<=index; i++)
                lst.add(arr[i]);
            for(int i=N-1; i>index; i--)
                lst.add(arr[i]);
        }
        
        return lst;
    }
}
