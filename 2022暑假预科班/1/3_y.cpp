#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, minn = 1145143, mini = 1145144, minj = 1145145, h_ = 0;
int a[111][111], b[101][101];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n - x; i++)
    {
        for (int j = 0; j < m - y; j++)
        {
            for (int k = i; k < x + i; k++)
            {
                for (int h = j; h < y + j; h++)
                {
                    h_ += abs(a[k][h] - b[k - i][h - j]);
                }
            }
            if (h_ < minn)
            {
                minn = h_;
                mini = i;
                minj = j;
            }
            h_ = 0;
        }
    }
    for (int i = mini; i < mini + x; i++)
    {
        for (int j = minj; j < minj + y; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
