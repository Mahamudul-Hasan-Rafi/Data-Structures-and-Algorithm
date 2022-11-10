class Solution
{
	Boolean isLeafNode(Node node)
	{
	    if(node.left==null && node.right==null)
	        return true;
	    return false;
	}
	
	void leftNodes(Node node, ArrayList<Integer> aL)
	{
	    Node current=node;
	    while(current!=null){
	        if(current.left!=null){
	            aL.add(current.data);
	            current=current.left;
	        }
	        else{
	            if(current.right!=null)
	                aL.add(current.data);
	            current=current.right;
	        }
	    }
	}
	
	void rightNodes(Node node, ArrayList<Integer> aL)
	{
	    Node current=node;
	    ArrayList<Integer> tmp = new ArrayList<Integer>();
	    
	    while(current!=null){
	        if(current.right!=null){
	            tmp.add(current.data);
	            current=current.right;
	        }
	        else{
	            if(current.left!=null)
	                tmp.add(current.data);
	            current=current.left;
	        }
	    }
	    
	    for(int i=tmp.size()-1; i>=0; i--)
	        aL.add(tmp.get(i));
	}
	
	void leafNodes(Node node, ArrayList<Integer> aL)
	{
	    if(isLeafNode(node)){
	        aL.add(node.data);
	        return;
	    }
	    
	    if(node.left!=null) 
	        leafNodes(node.left, aL);
	    if(node.right!=null)
	        leafNodes(node.right, aL);
	}
	
	ArrayList <Integer> boundary(Node node)
	{
	    ArrayList<Integer> aL =  new ArrayList<Integer>();
	    
	    if(node==null)
	        return aL;
	    else if(isLeafNode(node)){
	        aL.add(node.data);
	        return aL;
	    }
	    else{
	        aL.add(node.data);
	        if(node.left!=null)
	            leftNodes(node.left, aL);
	        leafNodes(node, aL);
	        if(node.right!=null)
	            rightNodes(node.right, aL);
	    }
	    
	    return aL;
	}
}
