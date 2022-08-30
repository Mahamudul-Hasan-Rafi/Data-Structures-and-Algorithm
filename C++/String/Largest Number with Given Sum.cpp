class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        string res="";
        
        if(sum<=9){
            res=to_string(sum);
            for(int i=2; i<=n; i++)
                res+="0";
            sum=0;
        }
        
        else{
            for(int i=1; i<=n; i++){
                if(sum<=9 && sum!=0){
                    res+=to_string(sum);
                    sum=0;
                }
                else if(sum>9){
                    sum-=9;
                    res+="9";
                }
                else
                    res+="0";
            }
        }
        
        if(res.length()==0 || sum!=0)
            return "-1";
        return res;
    }
};
