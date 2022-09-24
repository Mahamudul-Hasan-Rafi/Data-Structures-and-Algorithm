class Solution
{
    public:
    string rearrangeString(string str)
    {
        unordered_map<char, int> mp;
        
        int len=str.length();
        for(int i=0; i<len; i++){
            mp[str[i]]++;
        }
        
        priority_queue<pair<int, char>> pq;
        for(auto m: mp){
            if(m.second>(len+1)/2)
                return "-1";
            pq.push({m.second, m.first});
        }
        
        string res="";
        pair<int, char> a, b;
        while(pq.size()>=2){
            a=pq.top();
            pq.pop();
            
            b=pq.top();
            pq.pop();
            
            res+=a.second;
            res+=b.second;
            
            if(a.first-1>0)
                pq.push({a.first-1, a.second});
            if(b.first-1>0)
                pq.push({b.first-1, b.second});
        }
        
        while(!pq.empty()){
            res+=pq.top().second;
            pq.pop();
        }
        
        return res;
    }
    
};
