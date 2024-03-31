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
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }
    return 0;
}