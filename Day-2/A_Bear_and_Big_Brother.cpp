#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int l, b;
    cin >> l >> b;
    int cnt = 0;
    if (l == b)
    {
        cout << 1 << endl;
    }
    else
    {
        while (true)
        {

            if (l > b)
            {
                break;
            }
            else
            {
                cnt++;
                l *= 3;
                b *= 2;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}