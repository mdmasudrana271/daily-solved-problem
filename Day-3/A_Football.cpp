#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int zero = 0, one = 0;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            zero++;
            one = 0;
        }
        else
        {
            one++;
            zero = 0;
        }
        if (zero == 7 || one == 7)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}