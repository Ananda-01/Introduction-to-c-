#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 && b == 2 || b == 1 && a == 2)
    {
        cout << 3;
    }
    else if (a == 1 && b == 3 || a == 3 && b == 1)
    {
        cout << 2;
    }
    else
    {
        cout << 1;
    }
    return 0;
}