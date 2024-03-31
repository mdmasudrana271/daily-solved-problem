#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int cnt = 0;
        if (a < b)
        {
            cnt++;
        }
        if (a < c)
        {
            cnt++;
        }
        if (a < d)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}