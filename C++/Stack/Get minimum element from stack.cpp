class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(s.empty())
            return -1;
           return minEle;
       }
       
       /*returns poped element from stack*/
       int pop(){
           int temp;
           
           if(s.empty())
            return -1;
           
           if(s.top()<minEle){
               temp=minEle;
               minEle=2*minEle-s.top();
           }
           else{
               temp=s.top();
           }
           
           s.pop();
           return temp;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty()){
               minEle=x;
           }
           else{
               if(x<minEle){
                   s.push(2*x-minEle);
                   minEle=x;
                   return;
               }
           }
           s.push(x);
       }
};
