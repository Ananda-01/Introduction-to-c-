#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin>>s;
    getline(cin,s);
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }

    // ranged based for loop
    for(char a:s)
    {
        cout<<a<<endl;
    }

    return 0;
}