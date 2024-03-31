#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (true)
    {
        n++;
        int x = n;
        set<int> st;
        bool flag = true;

        while (x > 0)
        {
            int digit = x % 10;
            if (st.count(digit) > 0)
            {
                flag = false;
            }
            st.insert(digit);
            x /= 10;
        }
        if (flag)
        {
            cout << n << endl;
            break;
        }
    }
    return 0;
}