#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(3));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 1)
            {
                sum++;
            }
        }
        if (sum >= 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}