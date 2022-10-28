class Solution
    {
        //Function to check if two trees are identical.
        public bool checkNode(Node r1, Node r2)
        {
            if(r1==null && r2!=null){
                return false;
            }
            if(r1!=null && r2==null)
            {
                return false;
            }
            if(r1==null && r2==null)
                return true;
            
            if(r1.data!=r2.data)
                return false;
            
            return (checkNode(r1.left, r2.left) && checkNode(r1.right, r2.right));

        }
        public bool isIdentical(Node r1,Node r2)
        {
            return checkNode(r1,r2);
        }


    }
