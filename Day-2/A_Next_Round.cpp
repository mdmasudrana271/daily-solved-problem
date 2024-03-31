#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] > 0 && v[i] >= v[k])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}