#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<char, bool> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]] = true;
    }
    if (mp.size() >= 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}