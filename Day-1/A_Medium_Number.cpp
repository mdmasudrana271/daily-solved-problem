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
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && a > c || a > b && a < c)
        {
            cout << a << endl;
        }
        else if (b < a && b > c || b < c && b > a)
        {
            cout << b << endl;
        }
        else if (c < a && c > b || c < b && c > a)
        {
            cout << c << endl;
        }
    }
    return 0;
}