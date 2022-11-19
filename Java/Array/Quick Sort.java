public class Main
{
    public static int Partition(int[] arr, int low, int high){
        int pivot=arr[(low+high)/2];  //Middle element as pivot
        int i=low, j=high, temp;

        while(i<=j){
            while(arr[i]<pivot)
                i++;
            while(arr[j]>pivot)
                j--;

            if(i<=j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

                i++;
                j--;
            }
        }

        return i;
    }
    public static void QuickSort(int[] arr, int low, int high){
        if(low<high){
            int p=Partition(arr, low, high);
            QuickSort(arr, low, p-1);
            QuickSort(arr, p+1, high);
        }
    }
    public static void main(String[] args) {
        int[] arr = {2,4,6,5,1,3,7};

        int len=arr.length;
        QuickSort(arr, 0, len-1);

        for(int i: arr){
            System.out.print(i+" ");
        }
        System.out.println();
    }
}
