#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // getline(cin,s);
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // cout<<s.capacity()<<endl;
    // s.clear();
    // cout<<s<<endl;
    // s.resize(12,'h');  // increase size
    // s.resize(5);  // decrease size
    // cout<<s<<endl;

    // element access 1

    // string s="Dhaka";
    // cout<<s[0]<<endl;
    // cout<<s.front()<<endl;
    // cout<<s.at(3)<<endl;
    // cout<<s[3]<<endl;
    // cout<<s.back()<<endl;
    // cout<<s[s.size()-1]<<endl;

    //string modifier

    // string s="University";
    // string h="Dhaka";
    // h.append(s);
    // cout<<h<<endl;
    // string s="Dhaka";
    // s.push_back('a');
    // s.pop_back();
    // cout<<s<<endl;
    string s="University";
    s.erase(0,3);
    s.replace(0,3,"hell");
    cout<<s<<endl;
    return 0;
}