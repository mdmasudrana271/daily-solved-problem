#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            char x = toupper(s[i]);
            cout << x;
        }
        else
        {

            cout << s[i];
        }
    }
    return 0;
}