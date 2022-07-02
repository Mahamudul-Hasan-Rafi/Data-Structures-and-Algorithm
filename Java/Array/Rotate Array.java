class Solution
{
    //Function to rotate an array by d elements in counter-clockwise direction. 
    static void rotateArr(int arr[], int d, int n)
    {
        d=d%n;
        
        int temp;
        for(int i=0, j=d-1; i<d/2; i++,j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(int i=d, j=n-1; i<(d+n)/2; i++,j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
        for(int i=0, j=n-1; i<n/2; i++,j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
