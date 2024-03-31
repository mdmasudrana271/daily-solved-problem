#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string target = "hello";
    int taridx = 0;
    for (char c : s)
    {
        if (c == target[taridx])
        {
            taridx++;
        }
        if (taridx == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}