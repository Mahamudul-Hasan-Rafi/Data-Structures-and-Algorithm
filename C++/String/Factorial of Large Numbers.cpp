class Solution {
public:
    vector<int> factorial(int N){
        vector<int> vec(1,1);
        
        int q=2, x=0, len, c, num;
        while(q<=N){
            len=vec.size();
            c=0;
            
            while(x<len){
                num=vec[x]*q+c;
                vec[x]=num%10;
                c=num/10;
                
                x++;
            }
            
            while(c){
                vec.push_back(c%10);
                c/=10;
            }
            x=0;
            q++;
        }
        
        reverse(vec.begin(), vec.end());
        
        return vec;
    }
};
