#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int up = 0, lo = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            up++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lo++;
        }
    }
    if (up > lo)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else if (up < lo)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if (up == lo)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    return 0;
}