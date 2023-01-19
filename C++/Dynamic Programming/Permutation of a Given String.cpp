#include<bits/stdc++.h>
using namespace std;

void printPermutations(string s, int index, int n)
{
    if(index==n){
        cout<<s<<" ";
        return;
    }

    for(int i=index; i<n; i++){
        swap(s[i], s[index]);
        printPermutations(s, index+1, n);
        swap(s[i], s[index]);
    }

}
int main()
{
    string s="ABC";

    printPermutations(s,0,3);

    return 0;
}
