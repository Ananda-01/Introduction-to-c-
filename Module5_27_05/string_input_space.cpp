#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cin.ignore(); // it skips one enter value
    string s;
    // cin>>s;
    // cin.getline(s,100) // it works only for s[100]
    getline(cin,s);  
    cout<<s<<endl;
    cout<<x<<endl;
    return 0;
}