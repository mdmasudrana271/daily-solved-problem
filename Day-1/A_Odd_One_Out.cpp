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
        if (a == b)
        {
            cout << c << endl;
        }
        else if (a == c)
        {
            cout << b << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}