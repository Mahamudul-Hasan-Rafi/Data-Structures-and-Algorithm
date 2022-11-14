class Solution {
    //Function to check if the linked list has a loop.
    public static boolean detectLoop(Node head){
        if(head.next==null)
            return false;
        Node hare=head, tortoise=head;
        while(hare!=null){
            if(hare.next!=null){
                hare=hare.next.next;
                tortoise=tortoise.next;
            }
            else
                return false;
                
            if(hare==tortoise)
                return true;
        }
        
        return false;
    }
}
