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
    int mx = INT_MIN, mn = INT_MAX;
    int maxi, mini;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= mn)
        {
            mn = v[i];
            mini = i;
        }
        if (v[i] > mx)
        {
            mx = v[i];
            maxi = i;
        }
    }
    if (maxi > mini)
    {
        mini++;
    }

    cout << maxi + (n - 1) - mini << endl;

    return 0;
}