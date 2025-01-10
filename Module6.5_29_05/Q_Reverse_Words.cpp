#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    //  string s;
    //  cin>>s;
    //  s=string(s.rbegin(),s.rend());
    //  cout<<s;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    ss>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    while(ss>>word)
    {
        // word=string(word.rbegin(),word.rend());
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
    return 0;
}

// not accepted