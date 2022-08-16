class Solution{
    public:
    long long getNextEven(string X)
    {
        string E = X;
        while(next_permutation(E.begin(), E.end())){
            if((E.back()-'0')%2 == 0)
                return stoll(E);
        }
        return -1;
    }
};
