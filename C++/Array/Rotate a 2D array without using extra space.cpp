class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    int len=n;
	    int r, c;
	    for(int i=0, j=0; i<n-1; i++,j++){
	        r=i+1;
	        c=j+1;
	        while(r<len){
	            swap(arr[r][j], arr[i][c]);
	            r++;
	            c++;
	        }
	    }
	    
	    for(int j=0; j<n; j++){
	        int i=0, k=n-1;
	        while(i<k){
	            swap(arr[i][j], arr[k][j]);
	            i++;
	            k--;
	        }
	    }
	}

};
