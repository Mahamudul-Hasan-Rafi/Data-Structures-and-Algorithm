class Solution
    {
        //Function to check whether a binary tree is balanced or not.
        bool flag=true;
        public int findHeight(Node root)
        {
            if(root==null)
                return 0;
            int lh=findHeight(root.left);
            int rh=findHeight(root.right);
            
            if(lh!=rh && Math.Abs(lh-rh)!=1)
                flag=false;
            
            return Math.Max(lh,rh)+1;
        }
        public bool isBalanced(Node root)
        {
            findHeight(root);
            if(flag)
                return true;
            else
                return false;
        }
    }
