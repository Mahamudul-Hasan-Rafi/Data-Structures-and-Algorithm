class Solution {
    int findKRotation(int arr[], int n) {
        int i=1;
        while(i<n && arr[i]>arr[i-1])
            i++;
        return i%n;
    }
}
