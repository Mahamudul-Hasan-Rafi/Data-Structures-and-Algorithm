class Solution
{
    //Function to merge k sorted arrays.
    public static ArrayList<Integer> mergeKArrays(int[][] arr,int K) 
    {
        // Write your code here.
        ArrayList<Integer> aL = new ArrayList<Integer>();
        
        for(int j=0; j<K; j++)
                aL.add(arr[0][j]);
                
        if(K==1)
            return aL;
        
        for(int i=1; i<K; i++){
            int m=0, n=0;
            int len=aL.size();
            ArrayList<Integer> temp = new ArrayList<Integer>();
            
            while(m<K && n<len){
                if(arr[i][m]<aL.get(n)){
                    temp.add(arr[i][m]);
                    m++;
                }
                else{
                    temp.add(aL.get(n));
                    n++;
                }
            }
            
            while(m<K){
                temp.add(arr[i][m]);
                m++;
            }
            while(n<len){
                temp.add(aL.get(n));
                n++;
            }
            
            aL=temp;
        }
        
        return aL;
    }
}
