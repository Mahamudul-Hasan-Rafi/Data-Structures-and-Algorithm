class Tree
{
     // Recursive function to print right view of a binary tree.
     ArrayList<Integer> Kdistance(Node root, int k)
     {
          ArrayList<Integer> aL = new ArrayList<Integer>();
          
          Queue<Node> queue = new LinkedList<Node>();
          
          queue.add(root);
          int sz=0, j=1;
          if(k==0)
            aL.add(root.data);
          while(!queue.isEmpty()){
              sz=queue.size();
              while(sz!=0){
                  Node temp=queue.peek();
                  if(temp.left!=null){
                      if(j==k)
                        aL.add(temp.left.data);
                      else
                        queue.add(temp.left);
                  }
                  
                  if(temp.right!=null){
                      if(j==k)
                        aL.add(temp.right.data);
                      else
                        queue.add(temp.right);
                  }
                  
                  queue.remove();
                  sz--;
              }
              j++;
          }
          
          return aL;
     }
}
