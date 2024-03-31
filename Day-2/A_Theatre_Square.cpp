#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, a;
    cin >> n >> m >> a;
    ll w = (n + a - 1) / a;
    ll l = (m + a - 1) / a;
    ll ans = w * l;
    cout << ans << endl;
    return 0;
}