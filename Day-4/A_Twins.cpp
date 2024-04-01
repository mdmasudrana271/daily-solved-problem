#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    sort(v.begin(), v.end(), greater<>());
    total = total / 2;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        cnt++;
        if (sum > total)
        {
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}