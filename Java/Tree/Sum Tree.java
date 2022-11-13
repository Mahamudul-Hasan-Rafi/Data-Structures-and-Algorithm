class Solution
{
	boolean flag=true;
	
	int checkSumTree(Node root)
	{
	    if(root==null)
	        return 0;
	    
	    int s=checkSumTree(root.left)+checkSumTree(root.right);
	    
	    if(s!=root.data && (root.left!=null || root.right!=null))
	        flag=false;
	    
	    return s+root.data;
	}
	boolean isSumTree(Node root)
	{
	    checkSumTree(root);
	    return flag;
	}
}
