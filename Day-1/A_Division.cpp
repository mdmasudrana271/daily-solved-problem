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
        int a;
        cin >> a;
        if (a >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (a >= 1600 && a <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (a >= 1400 && a <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else
        {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}