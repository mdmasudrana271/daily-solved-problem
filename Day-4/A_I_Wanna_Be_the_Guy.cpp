#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p, q;
    vector<int> v;
    map<int, bool> mp;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x] = true;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x] = true;
    }

    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] != true)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}