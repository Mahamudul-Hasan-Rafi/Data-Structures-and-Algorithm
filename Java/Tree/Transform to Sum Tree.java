class Solution{
    public int convertSumTree(Node root){
        if(root==null)
            return 0;
         
         int a = convertSumTree(root.left);
         int b = convertSumTree(root.right);
         int c = root.data;
         
         root.data = a+b;
         
         return a+b+c;
    }
    public void toSumTree(Node root){
        
         convertSumTree(root);
         return;
    }
}
