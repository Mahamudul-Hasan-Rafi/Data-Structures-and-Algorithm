class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> vec_pos, vec_neg;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]<0)
	            vec_neg.push_back(arr[i]);
	        else
	            vec_pos.push_back(arr[i]);
	    }
	    
	    int k=0, m=0, j=0;
	    for(; m<vec_pos.size() && j<vec_neg.size(); m++,j++,k++){
	        arr[k]=vec_pos[m];
	        k++;
	        arr[k]=vec_neg[j];
	    }

	    
	    if(j==vec_neg.size()){
	        while(m<vec_pos.size()){
	            arr[k]=vec_pos[m];
	            m++;
	            k++;
	        }
	    }
	    else{
	        while(j<vec_neg.size()){
	            arr[k]=vec_neg[j];
	            j++;
	            k++;
	        }
	    }
	    
	    return;
	}
};
