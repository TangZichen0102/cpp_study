#include <bits/stdc++.h>

using namespace std;
const int N = 15;
int n, m, t, x, y;
int vis[N][N], cnt;
int dx[8] = {-2, -2, -1, -1, 2, 2, 1, 1};
int dy[8] = {1, -1, 2, -2, 1, -1, 2, -2};
void dfs(int x, int y, int step)
{
    int nx, ny;
    if (step == n * m)
    {
        cnt++;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        else if (vis[nx][ny] == 0)
        {
            vis[nx][ny] = 1;
            dfs(nx, ny, step + 1);
            vis[nx][ny] = 0;
        }
    }
}
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << 111;
        cnt = 0;
        memset(vis, 0, sizeof(vis));
        cin >> n >> m >> x >> y;
        vis[x][y] = 1;
        dfs(x, y, 1);
        cout << cnt << endl;
    }
    return 0;
}
