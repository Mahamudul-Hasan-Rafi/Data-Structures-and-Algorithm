class Solution{
    //Function to find the days of buying and selling stock for max profit.
    ArrayList<ArrayList<Integer> > stockBuySell(int A[], int n) {
        
        ArrayList<ArrayList<Integer>> aLL= new ArrayList<ArrayList<Integer>>();
        
        int k=-1, profit=0;
        
        for(int i=0; i<n-1; i++){
            if((A[i]<A[i+1]) && k==-1){
                k=i;
                while(i<n-1 && A[i]<A[i+1])
                    i++;
                aLL.add(new ArrayList<>(Arrays.asList(k,i)));
                k=-1;
            }
        }
        

        return aLL;
    }
}
