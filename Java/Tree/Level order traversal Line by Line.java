class Level_Order_Traverse
{
    //Function to return the level order traversal line by line of a tree.
    static ArrayList<ArrayList<Integer>> levelOrder(Node node) 
    {
        ArrayList<ArrayList<Integer>> arr = new ArrayList<ArrayList<Integer>>();
        
        Queue<Node> queue = new LinkedList<Node>();
        
        if(node==null)
            return arr;
        
        int sz=0;
        
        queue.add(node);
        Node temp;
        while(!queue.isEmpty()){
            ArrayList<Integer> ar = new ArrayList<Integer>();
            sz=queue.size();
            
            while(sz!=0){
                temp=queue.peek();
                queue.remove();
                
                if(temp.left!=null)
                    queue.add(temp.left);
                if(temp.right!=null)
                    queue.add(temp.right);
                
                ar.add(temp.data);
                
                sz--;
            }
            
            arr.add(ar);
        }
        
        return arr;
    }
}
