class Solution
{
   //Function to store the zig zag order traversal of tree in a list.
    public List<int> zigZagTraversal(Node root)
    {
    	Queue<Node> q = new Queue<Node>();
    	List<int> lst = new List<int>();
    	
    	if(root==null)
    	    return lst;
    	    
    	bool flag=false;
    	int sz;
    	q.Enqueue(root);
    	
    	while(q.Count!=0){
    	   List<int> lt = new List<int>();
    	   sz=q.Count;
    	   
    	   while(sz>0){
    	       Node temp=q.Peek();
    	       q.Dequeue();
    	       
    	       lt.Add(temp.data);
    	       
    	       if(temp.left!=null)
    	        q.Enqueue(temp.left);
    	       if(temp.right!=null)
    	        q.Enqueue(temp.right);
    	       
    	       sz--;
    	   }
    	   
    	   flag=!flag;
    	   if(!flag){
    	    lt.Reverse();
    	    lst.AddRange(lt);
    	   }
    	   else
    	    lst.AddRange(lt);
    	    
    	}
    	
    	return lst;
    	
    }
}
