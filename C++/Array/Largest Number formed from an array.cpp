class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	static bool compare(string &a, string &b){
	    if((a+b)>(b+a))
	        return true;
	    else
	        return false;
	}
	
	string printLargest(vector<string> &arr) {
	    string ans="";
	    
	    sort(arr.begin(), arr.end(), compare);
	    
	    for(string v: arr)
	        ans+=v;
	        
	    return ans;
	}
};
