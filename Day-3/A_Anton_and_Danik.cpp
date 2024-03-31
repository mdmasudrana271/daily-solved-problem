#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ant = 0, dan = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            ant++;
        }
        else
        {
            dan++;
        }
    }
    if (ant == dan)
    {
        cout << "Friendship" << endl;
    }
    else if (ant > dan)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
    return 0;
}