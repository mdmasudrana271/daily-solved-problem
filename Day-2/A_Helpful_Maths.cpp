#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {

            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
        {
            cout << v[i];
        }
        else
        {
            cout << v[i] << "+";
        }
    }

    return 0;
}