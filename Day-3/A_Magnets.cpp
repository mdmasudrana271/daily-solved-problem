#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}