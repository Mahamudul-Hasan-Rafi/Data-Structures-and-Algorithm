class Compute {
    public int findElement(int arr[], int n){
        int[] min_ = new int[n];
        int[] max_ = new int[n];
        
        max_[0]=arr[0];
        for(int i=1; i<n; i++){
            if(max_[i-1]>arr[i])
                max_[i]=max_[i-1];
            else
                max_[i]=arr[i];
        }
        
        min_[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--){
            if(min_[i+1]<arr[i])
                min_[i]=min_[i+1];
            else
                min_[i]=arr[i];
        }
        
        for(int i=1; i<n-1; i++)
        {
            if(max_[i]==min_[i])
                return max_[i];
        }
        
        return -1;
    }
}
