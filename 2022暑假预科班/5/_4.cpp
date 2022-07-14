#include <bits/stdc++.h>

using namespace std;
int a, b, c, d, sum;

int p[4][5] = {
    {461, 431, 420, 0},
    {100, 57, 70, 0},
    {130, 160, 118, 0},
    {167, 266, 75, 0},
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        sum += p[i][a - 1];
        // cout << sum << endl;
    }
    cout << sum;
}