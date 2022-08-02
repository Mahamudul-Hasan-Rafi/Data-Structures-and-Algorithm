class Solution{
  public:
    string convertToRoman(int n) {
        string roman="";
        
        int rem=n;
        while(rem!=0){
            if(rem>=1000){
                rem-=1000;
                roman+="M";
            }
            else if(rem>=900){
                rem-=900;
                roman+="CM";
            }
            else if(rem>=500){
                rem-=500;
                roman+="D";
            }
            else if(rem>=400){
                rem-=400;
                roman+="CD";
            }
            else if(rem>=100){
                rem-=100;
                roman+="C";
            }
            else if(rem>=90){
                rem-=90;
                roman+="XC";
            }
            else if(rem>=50){
                rem-=50;
                roman+="L";
            }
            else if(rem>=40){
                rem-=40;
                roman+="XL";
            }
            else if(rem>=10){
                rem-=10;
                roman+="X";
            }
            else if(rem==9){
                rem-=9;
                roman+="IX";
            }
            else if(rem>=5){
                rem-=5;
                roman+="V";
            }
            else if(rem==4){
                rem-=4;
                roman+="IV";
            }
            else{
                rem-=1;
                roman+="I";
            }
        }
        
        return roman;
    }
};
