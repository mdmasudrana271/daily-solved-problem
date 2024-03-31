#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    int cnt = 0;
    while (q--)
    {
        int p, c;
        cin >> p >> c;
        if (c - p >= 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}