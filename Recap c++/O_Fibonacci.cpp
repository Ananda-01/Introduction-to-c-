#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int f0 = 0, f1 = 1;
    if (n == 1)
    {
        cout << "0";
    }
    else if (n == 2)
    {
        cout << "1";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            long long int f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        cout << f1 << endl;
    }
  

    return 0;
}