#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a;
    for (int i = 1; i <= n; i++)
    {

        cin >> a;
        int tmp = 0;
        for (int i = 2; i < n / 2; i++)
        {
            if (a % i == 0)
            {
                tmp = 1;
                break;
            }
        }
        if (tmp == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}