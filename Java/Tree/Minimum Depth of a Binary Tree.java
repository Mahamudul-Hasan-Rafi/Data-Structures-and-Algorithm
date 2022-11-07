class Solution
{
    int max_(int a, int b){
        if(a>b)
            return a;
        return b;
    }
    
    int min_(int a, int b){
        if(a<b)
            return a;
        return b;
    }
    int minHeight(Node root){
        if(root==null)
            return 0;
        int lh=minHeight(root.left);
        int rh=minHeight(root.right);
        
        if(lh==0 || rh==0)
            return 1+max_(lh, rh);
        return 1+min_(lh, rh);
    }
	int minDepth(Node root)
	{
	    return minHeight(root);
	}
}

