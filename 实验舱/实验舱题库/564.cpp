#include <cstdio>
#include <iostream>
using namespace std;
char a[105][105];
int main()
{

#ifndef ONLINE_JUDGE
    freopen("564_2.in", "r", stdin);
#endif // ONLINE_JUDGE

    int r, c;
    int b[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1}; //上下左右
    cin >> r >> c;
    int sum = 0;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (a[i][j] == '#')
            {
                a[i][j] = '.';
                sum++;
                a[i + b[0][0]][j + b[0][1]] = '.';
                a[i + b[1][0]][j + b[1][1]] = '.';
                a[i + b[2][0]][j + b[2][1]] = '.';
                a[i + b[3][0]][j + b[3][1]] = '.';
            }
        }
    }
    cout << sum;
    return 0;
}