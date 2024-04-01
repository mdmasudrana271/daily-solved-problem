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
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            // int cnt = 0;
            // while (true)
            // {
            //     a++;
            //     cnt++;
            //     if (a % b == 0)
            //     {
            //         break;
            //     }
            // }
            // cout << cnt << endl;
            int rem = a % b;
            cout << b - rem << endl;
        }
    }
    return 0;
}