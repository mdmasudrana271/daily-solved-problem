#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == n && i % 2 != 0)
        {
            cout << "I hate it";
        }
        else if (i == n && i % 2 == 0)
        {
            cout << "I love it";
        }
        else if (i % 2 != 0)
        {
            cout << "I hate that"
                 << " ";
        }
        else
        {
            cout << "I love that"
                 << " ";
        }
    }
    return 0;
}