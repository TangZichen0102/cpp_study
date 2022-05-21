#include <bits/stdc++.h>
using namespace std;
#define N 1010
int a[N][N], c[N][N], f[N][N];
int main()
{
    int m, n, mid;
    cin >> m >> n;
    for (int i = 1; i < m; i++)
        cin >> a[i][i + 1];
    for (int i = 1; i <= m; i++)
        for (int j = i + 1; j <= m; j++)
            a[i][j] = a[j][i] = a[i][j - 1] + a[j - 1][j];
    for (int i = 1; i <= m; i++)
        for (int j = i + 1; j <= m; j++)
        {
            mid = (i + j) / 2;
            for (int k = i; k <= j; k++)
                c[i][j] += a[k][mid];
        }
    for (int i = 1; i <= m; i++)
        f[i][1] = c[1][i];
    for (int i = 1; i <= m; i++)
        for (int j = 2; j <= n; j++)
        {
            f[i][j] = 999999;
            for (int k = j - 1; k <= i; k++)
                f[i][j] = min(f[i][j], f[k][j - 1] + c[k + 1][i]);
        }
    cout << f[m][n];
    return 0;
}