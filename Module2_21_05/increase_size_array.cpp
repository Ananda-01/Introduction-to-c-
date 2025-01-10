#include<bits/stdc++.h>
using namespace std;
int main()
{
    int*a=new int[5];  // arrray declare
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int b[7];
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    b[5]=90;
    b[6]=100;
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";  // new array
    }
    cout<<endl;
    delete[] a;  // we delete an array using this syntax
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}