class Solution
{   
    //Function to return a list of BST elements in a given range.
    public static void preOrderTraversal(Node root, int low, int high, ArrayList<Integer> aL){
        if(root==null)
            return;
        preOrderTraversal(root.left, low, high, aL);
        if(root.data>=low && root.data<=high)
            aL.add(root.data);
        preOrderTraversal(root.right, low, high, aL);
    }
	
	public static ArrayList<Integer> printNearNodes(Node root,int low,int high) {
        ArrayList<Integer> aL = new ArrayList<Integer>();
        
        preOrderTraversal(root, low, high, aL);
        
        return aL;
    }
    
}
