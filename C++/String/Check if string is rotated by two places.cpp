class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int len1=str1.length();
        int len2=str2.length();
        
        if(len1!=len2)
            return false;
        else if(len1<=2)
            return str1!=str2?false:true;
        else{
            string s="";
            for(int i=2; i<len1; i++){
                s+=str1[i];
            }
            s+=str1[0];
            s+=str1[1];
            
            if(s==str2)
                return true;
            
            s="";
            for(int i=0; i<len1-2; i++)
                s+=str1[i];
            s=str1[len1-1]+s;
            s=str1[len1-2]+s;
            
            return s!=str2?false:true;
        }
    }

};
