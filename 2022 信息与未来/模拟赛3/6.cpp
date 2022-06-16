#include <bits/stdc++.h>

using namespace std;
int n, m, q, x, y, vis[2001][2001], idx, dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool check(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 2 && !cnt; i++)
    {
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (tx >= 1 && tx <= n && ty >= 1 && ty <= m && vis[tx][ty])
            cnt++;
    }
    for (int i = 2; i < 4 && cnt == 1; i++)
    {
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (tx >= 1 && tx <= n && ty >= 1 && ty <= m && vis[tx][ty])
            cnt++;
    }
    return cnt == 2;
}
int bfs(int x, int y)
{
    if (vis[x][y])
        return 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = ++idx;
    int cnt = 0;
    while (q.size())
    {
        auto cur = q.front();
        q.pop();
        cnt++;
        for (int i = 0; i < 4; i++)
        {
            int tx = cur.first + dir[i][0], ty = cur.second + dir[i][1];
            if (tx >= 1 && tx <= n && ty >= 1 && ty <= m && !vis[tx][ty] && check(tx, ty))
                q.push({tx, ty}), vis[tx][ty] = idx;
        }
    }
    return cnt;
}
int main()
{
    cin >> n >> m >> q;
    while(q--) {
        cin >> x >> y;
        cout << bfs(x, y) << endl;
    }
    return 0;
}