#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a[22][22] = {0};
    int m, n;
    cin >> n >> m;
    for (int i = 1; i < 20; i++)
    {
        a[1][i] = 1;
        a[i][1] = 1;
    }
    for (int i = 2; i < 20; i++)
        for (int j = 2; j < 20; j++) a[i][j] = a[i - 1][j] + a[i][j - 1];
    cout << a[m][n];
    return 0;
}