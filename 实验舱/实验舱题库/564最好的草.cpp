#include <bits/stdc++.h>

using namespace std;
int n, m;
int sum;
char a[105][105];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void dfs(int x, int y)
{
    if (x >= n || y >= m || x < 0 || y < 0 || a[x][y] == '.')
        return;
    a[x][y] = '.';
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        dfs(nx, ny);
    }
}
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("564.in", "r", stdin);
    #endif // ONLINE_JUDGE

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '#')
            {
                sum++;
                dfs(i, j);
            }
        }
    cout << sum;
    return 0;
}