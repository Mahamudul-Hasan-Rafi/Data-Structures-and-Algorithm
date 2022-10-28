class Solution
    {
        //Function to return a list containing elements of right view of the binary tree
        public List<int> ls = new List<int>();
        
        public void checkRight(Node r, int level)
        {
            if(r==null)
                return;
            if(level==ls.Count){
                ls.Add(r.data);
            }
            checkRight(r.right,level+1);
            checkRight(r.left,level+1);
        }
        public List<int> rightView(Node root)
        {
            checkRight(root, 0);
            
            return ls;
        }
    }
