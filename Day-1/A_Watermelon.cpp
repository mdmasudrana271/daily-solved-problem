#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n % 2 == 0 && (n / 2) != 1)
    {
        if ((n / 2) % 2 == 0)
        {

            cout << "YES" << endl;
        }
        else if ((n / 2) % 2 != 0)
        {
            if ((n - 2) % 2 == 0)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}