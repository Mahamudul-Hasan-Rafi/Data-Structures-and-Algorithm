class GfG
 {
	String encode(String str)
	{
          int num=1;
          char c=str.charAt(0);
          String res="", temp;
          
          int len=str.length();
          for(int i=1; i<len; i++){
              if(str.charAt(i)!=str.charAt(i-1)){
                  temp=str.charAt(i-1)+Integer.toString(num);
                  res+=temp;
                  num=1;
              }
              else
                num++;
          }
          
          temp=str.charAt(len-1)+Integer.toString(num);
          res+=temp;
          
          return res;
	}
	
 }
