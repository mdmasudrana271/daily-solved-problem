#include <bits/stdc++.h>
using namespace std;

bool lucky(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 744 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 474 == 0 || n % 744 == 0 || n % 747 == 0 || n % 777 == 0 || n % 774 == 0 || n % 477 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0 && lucky(i))
    //     {
    //         cout << "YES" << endl;
    //         return 0;
    //     }
    // }
    // cout << "NO" << endl;
    return 0;
}