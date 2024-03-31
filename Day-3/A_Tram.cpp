#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int mx = INT_MIN, ex = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        ex -= a;
        ex += b;
        mx = max(mx, ex);
    }
    cout << mx << endl;
    return 0;
}