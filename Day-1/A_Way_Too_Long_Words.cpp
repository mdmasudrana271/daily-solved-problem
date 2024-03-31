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
        string s;
        cin >> s;
        int sz = s.size();
        if (sz > 10)
        {
            cout << s.front() << sz - 2 << s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}