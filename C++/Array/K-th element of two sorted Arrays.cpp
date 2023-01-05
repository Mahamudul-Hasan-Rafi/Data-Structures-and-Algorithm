class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0, j=0, count=0, temp;
        while(i<n && j<m){
            count++;
            if(arr1[i]<arr2[j]){
                temp=arr1[i];
                i++;
            }
            else{
                temp=arr2[j];
                j++;
            }
            
            if(count==k)
                return temp;
        }
        
        while(i<n){
            count++;
            if(count==k)
                return arr1[i];
            i++;
        }
        while(j<m){
            count++;
            if(count==k)
                return arr2[j];
            j++;
        }
    }
};
