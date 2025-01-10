#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // sorting array
    // best algorithm to sort data
    // sort(a,a+n);  // Asending order
    sort(a,a+n,greater<int>());  // Decending order
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}