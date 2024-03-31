#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int mat[5][5];
    int x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int ans = 0;
    if (x > 2)
    {
        ans += x - 2;
    }
    else if (x < 2)
    {
        ans += 2 - x;
    }
    if (y > 2)
    {
        ans += y - 2;
    }
    else if (y < 2)
    {
        ans += 2 - y;
    }

    cout << ans << endl;
    return 0;
}