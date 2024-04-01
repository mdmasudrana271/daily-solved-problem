#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int sum1 = a + b * c;
    int sum2 = a * (b + c);
    int sum3 = a * b * c;
    int sum4 = (a + b) * c;
    int sum5 = a + b + c;
    int max_sum = max({sum1, sum2, sum3, sum4, sum5});
    cout << max_sum << endl;
    return 0;
}