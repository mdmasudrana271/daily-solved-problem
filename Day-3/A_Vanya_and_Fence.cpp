#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, h;
    cin >> n >> h;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > h)
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
    }

    cout << ans << endl;
    return 0;
}