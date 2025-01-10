#include<bits/stdc++.h>
using namespace std;
int fun(int a,int b)
{
    int sum=0;
    for(int i=2;i<=b;i+=2)
    {
       int p=pow(a,i);
       sum=sum+p;
    }
    return sum;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int s=fun(a,b);
    cout<<s<<endl;
   return 0;
}