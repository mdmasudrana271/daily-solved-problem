#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, st;
    cin >> s;
    cin >> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == st[i])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
    return 0;
}