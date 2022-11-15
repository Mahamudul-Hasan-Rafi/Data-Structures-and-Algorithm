class Tree {
    ArrayList<Integer> postOrder(Node node) {
        ArrayList<Integer> aL = new ArrayList<Integer>();
        
        Stack<Node> stck1 = new Stack<Node>();
        Stack<Integer> stck2 = new Stack<Integer>();
        
        stck1.push(node);
        while(!stck1.empty()){
            Node t = stck1.pop();
            stck2.push(t.data);
            
            if(t.left!=null)
                stck1.push(t.left);
            if(t.right!=null)
                stck1.push(t.right);
        }
        
        while(!stck2.empty()){
            aL.add(stck2.pop());
        }
        
        return aL;
    }
}
