#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string st, st2;
    cin >> st;
    cin >> st2;
    transform(st.begin(), st.end(), st.begin(), ::tolower);
    transform(st2.begin(), st2.end(), st2.begin(), ::tolower);
    if (st == st2)
    {
        cout << 0 << endl;
    }
    else if (st < st2)
    {
        cout << -1 << endl;
    }
    else if (st > st2)
    {
        cout << 1 << endl;
    }
    return 0;
}