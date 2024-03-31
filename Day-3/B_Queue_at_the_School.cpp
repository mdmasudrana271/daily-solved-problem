#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < s.size() - 1; j++)
        {

            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                s[j] = 'G';
                s[j + 1] = 'B';
                j++;
            }
        }
    }
    cout << s;
    return 0;
}