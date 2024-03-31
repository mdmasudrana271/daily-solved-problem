#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> append;
        int pow = 1;
        while (n > 0)
        {
            if (n % 10 > 0)
            {
                append.push_back((n % 10) * pow);
            }
            n /= 10;
            pow *= 10;
        }
        cout << append.size() << endl;
        for (int i = 0; i < append.size(); i++)
        {
            cout << append[i] << " ";
        }
        cout << endl;
    }
    return 0;
}