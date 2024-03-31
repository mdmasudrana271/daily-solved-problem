#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int X = 0;
    for (int i = 0; i < n; i++)
    {

        string st;
        cin >> st;
        if (st == "X++" || st == "++X")
        {
            X++;
        }
        else
        {
            X--;
        }
    }
    cout << X << endl;

    return 0;
}