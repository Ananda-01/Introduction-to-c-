#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    // cout<<s[1]<<endl;
    // cout<<s.at(1)<<endl;  // value access using object function

    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl;

    // cout<<s[0]<<endl;
    // cout<<s.front()<<endl;
    return 0;
}