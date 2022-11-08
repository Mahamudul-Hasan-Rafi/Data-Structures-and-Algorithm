#include<bits/stdc++.h>
using namespace std;

int makeEqualLength(string &a, string &b)
{
    int len1=a.length();
    int len2=b.length();

    if(len1>len2){
        for(int i=0; i<len1-len2; i++)
            b='0'+b;
        return len1;
    }
    else{
        for(int i=0; i<len2-len1; i++)
            a='0'+a;
        return len2;
    }
}

string addBinaryStrings(string a, string b)
{
    int len=makeEqualLength(a, b);

    int first, second, carry=0;
    string result;
    char s;
    for(int i=len-1; i>=0; i--){
        first=a[i]-'0';
        second=b[i]-'0';

        s=((first^second^carry)+'0');
        result=s+result;
        carry=(first&second) | (first&carry) | (second&carry);
    }

    if(carry)
        result='1'+result;

    return result;
}

long int multiply2Bits(string X, string Y)
{
    return (X[0]-'0')*(Y[0]-'0');
}
long int multiply(string X, string Y)
{
    int n=makeEqualLength(X,Y);

    if(n==1)
        return multiply2Bits(X,Y);

    int f=n/2;
    int s=n-f;

    string Xf=X.substr(0,f); //a
    string Xs=X.substr(f,s); //b

    string Yf=Y.substr(0,f); //c
    string Ys=Y.substr(f,s); //d

    long int ac=multiply(Xf,Yf);
    long int bd=multiply(Xs,Ys);
    long int z=multiply(addBinaryStrings(Xf, Xs), addBinaryStrings(Yf,Ys)); //z=multiply(a+b,c+d)

    return ac*(1<<(2*s))+(z-ac-bd)*(1<<s)+bd;
}
int main()
{
    string str1=bitset<16>(34219).to_string();
    string str2=bitset<16>(42321).to_string();
    cout<<multiply(str1, str2)<<endl;
    return 0;
}
