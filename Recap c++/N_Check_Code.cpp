#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = a + b + 1;
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        if (s[a] == '-')
            cnt = 1;
    }
    if (cnt == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}