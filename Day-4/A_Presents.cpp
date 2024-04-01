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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] == i)
            {
                cout << j + 1 << " ";
            }
        }
    }
    return 0;
}