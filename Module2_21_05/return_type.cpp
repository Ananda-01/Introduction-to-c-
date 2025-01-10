#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    // int a[5];
    int*a=new int[5];  
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
    }
    return a;  // array return from function
}
int main()
{
    int *a=fun();
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}