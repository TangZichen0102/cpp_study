#include <bits/stdc++.h>

using namespace std;
int n, m, r, c;
int a[105][105], b[105][105];
int maxn = INT_MAX;
int x, y;
int sumb, suma;

void fun1(int i, int j)
{
    suma = 0;
    for (int k = i; k < i + r; k++)
    {
        for (int l = j; l < j + c; l++)
        {
            suma += abs(a[k][l] - b[k - i][l - j]);
            // cout << a[k][l] << " ";
        }
        // cout << endl;
    }
    // cout << suma << endl;
    if (suma < maxn)
    {
        maxn = suma;
        x = i;
        y = j;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }

    for (int i = 0; i < m - r + 1; i++)
        for (int j = 0; j < n - c + 1; j++)
        {
            suma = 0;
            fun1(i, j);
        }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i + x][j + y] << " ";
        cout << endl;
    }
    return 0;
}