class Solution {

    ArrayList<Integer> findSubarray(int a[], int n) {
        // code here
        ArrayList<Integer> aL = new ArrayList<Integer>();
        ArrayList<Integer> temp = new ArrayList<Integer>();
        
        int sum=0, max=0;
        for(int i=0; i<n; i++){
            if(a[i]<0){
                if(sum>max){
                    max=sum;
                    aL=(ArrayList<Integer>)temp.clone();
                }
                else if(sum==max){
                    if(aL.size()<temp.size()){
                        aL=(ArrayList<Integer>)temp.clone();
                    }
                }
                sum=0;
                temp.clear();
            }
            else{
                sum+=a[i];
                temp.add(a[i]);
            }
        }
        if(sum>max){
            aL=(ArrayList<Integer>)temp.clone();
        }
        else if(sum==max){
            if(aL.size()<temp.size()){
                aL=(ArrayList<Integer>)temp.clone();
            }
        }
        
        if(aL.size()==0)
            aL.add(-1);
        
        return aL;
    }
}
