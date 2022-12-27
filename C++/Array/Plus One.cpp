class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        vector<int> vec;
        
        int sum=0, carry=1;
        for(int i=N-1;i>=0; i--){
            sum=carry+arr[i];
            carry=sum/10;
            vec.push_back(sum%10);
        }
        
        if(carry)
            vec.push_back(carry);
        
        reverse(vec.begin(), vec.end());
        
        return vec;
    }
};
