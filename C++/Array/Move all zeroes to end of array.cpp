class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	   // while(i<n){
	   //     if(arr[i]==0){
	   //         if(k==-1)
	   //             k=i;
	   //         i++;
	   //         while(arr[i]==0){
	   //             i++;
	   //         }
	   //         while(i<n && arr[i]!=0){
	   //             swap(arr[i],arr[k]);
	   //             i++;
	   //             k++;
	   //         }
	   //     }
	   //     else
	   //         i++;
	   // }
	   
	   int j=0;
	   for(int i=0; i<n; i++){
	      if(arr[i]!=0){
	          swap(arr[i],arr[j]);
	          j++;
	      } 
	   }
	}
};
