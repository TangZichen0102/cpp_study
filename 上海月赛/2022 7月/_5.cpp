#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int maxRow = 4 * n - 3, maxCol = 6 * n - 5, len = 3 * n - 2;

    int a[500][500];

    // 画三角形下边
    for (int i = 1; i <= maxCol; i++)
    {
        if (i % 2 == 1)
        {
            a[len][i] = 1;
        }
    }
    //画三角边左边
    for (int i = 1; i < len; i++)
    {
        a[len - i][1 + i] = 1;
    }
    //画三角边右边
    for (int i = 1; i < len; i++)
    {
        a[len - i][maxCol - i] = 1;
    }

    for (int i = 1, k = maxRow; i <= maxRow; i++, k--)
    {
        for (int j = 1; j <= maxCol; j++)
        {
            cout << (a[i][j] || a[k][j] ? "*" : " ");
        }
        puts("");
    }
    return 0;
}