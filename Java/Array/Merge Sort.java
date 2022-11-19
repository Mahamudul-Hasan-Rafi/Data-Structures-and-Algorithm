public class Main2 {
    public static void Merge(int[] arr, int low, int mid, int high){
        int n1=mid-low+1;
        int n2=high-mid;

        int[] L=new int[n1+1];
        int[] R=new int[n2+1];

        for(int i=0; i<n1; i++)
            L[i]=arr[low+i];
        for(int i=0; i<n2; i++)
            R[i]=arr[mid+i+1];

        L[n1]=Integer.MAX_VALUE;
        R[n2]=Integer.MAX_VALUE;

        int i=0,j=0;
        for(int k=low; k<=high; k++){
            if(L[i]<R[j]){
                arr[k]=L[i];
                i++;
            }
            else{
                arr[k]=R[j];
                j++;
            }
        }
    }
    public static void MergeSort(int[] arr, int low, int high){
        if(low<high){
            int mid=(low+high)/2;

            MergeSort(arr, low, mid);
            MergeSort(arr, mid+1, high);

            Merge(arr, low, mid, high);
        }
    }
    public static void main(String[] args){
        int[] arr={2,4,6,5,1,3,7};

        MergeSort(arr, 0, arr.length-1);
        for(int i:arr){
            System.out.print(i+" ");
        }
        System.out.println();
    }
}
