#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, k, c;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        c = n / 2;
    }
    else
    {
        c = (n + 1) / 2;
    }

    if (k <= c)
    {
        cout << (k * 2) - 1 << endl;
    }
    else
    {
        cout << (k - c) * 2 << endl;
    }

    return 0;
}