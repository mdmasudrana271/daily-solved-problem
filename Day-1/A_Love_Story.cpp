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
        string str = "codeforces";
        string st;
        cin >> st;
        int cnt = 0;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] != str[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}