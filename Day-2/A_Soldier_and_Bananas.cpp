#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k, n, w;
    cin >> k >> n >> w;
    int cost = 0;
    for (int i = 1; i <= w; i++)
    {
        cost += i * k;
    }
    if (cost - n > 0)
    {

        cout << cost - n << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}