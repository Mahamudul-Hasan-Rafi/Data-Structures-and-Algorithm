class Solution
{
    //Function to return a list containing the bottom view of the given tree.
    public ArrayList <Integer> bottomView(Node root)
    {
        ArrayList<Integer> aL = new ArrayList<Integer>();
        Queue<Node> q = new LinkedList<>();
        
        Map<Integer, Integer> m = new TreeMap<>();
        
        root.hd=0;
        q.add(root);
        while(!q.isEmpty()){
            Node temp=q.remove();
            
            if(temp.left!=null){
                temp.left.hd=temp.hd-1;
                q.add(temp.left);
            }
            
            if(temp.right!=null){
                temp.right.hd=temp.hd+1;
                q.add(temp.right);
            }
            
            m.put(temp.hd, temp.data);
        }
        
        for(Map.Entry<Integer, Integer> mp: m.entrySet())
            aL.add(mp.getValue());
        
        return aL;
    }
}
