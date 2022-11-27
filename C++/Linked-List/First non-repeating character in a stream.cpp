class Solution {
	public:
		string FirstNonRepeating(string A){
		    vector<int> vis(26, 0);
		    vector<char> vec;
		    
		    int len = A.length();
		    string ans = "";
		    for(int i=0; i<len; i++)
		    {
		        if(!vis[A[i]-'a']){
		            vec.push_back(A[i]);
		        }
		        vis[A[i]-'a']+=1;
		        
		        int f=0;
		        int n=vec.size();
		        
		        for(int j=0; j<n; j++){
		            if(vis[vec[j]-'a']==1){
		                ans+=vec[j];
		                f=1;
		                break;
		            }
		        }
		        
		        if(!f){
		            ans+='#';
		        }
		    }
		    
		    return ans;
		}
		

};
