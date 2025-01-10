#include<bits/stdc++.h>
using namespace std;
int* array_fun()
{
    int *ar=new int[5]; // syntax of dynamic array
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
    }
    return ar;
}
int main()
{
    int *a=array_fun();
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}