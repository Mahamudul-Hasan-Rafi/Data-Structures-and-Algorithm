#include<bits/stdc++.h>
using namespace std;

void func(int index, string s, vector<char>& vec, int sz)
{
    if(index==sz){
        if(vec.size()==0)
            cout<<"{}";
        for(auto it: vec)
            cout<<it<<" ";
        cout<<endl;

        return;
    }

    vec.push_back(s[index]);
    func(index+1, s, vec, sz);
    vec.pop_back();
    func(index+1, s, vec, sz);
}

int main()
{
    string s="abcd";

    vector<char> vec;

    int len=s.length();

    func(0, s, vec, len);

    return 0;
}
