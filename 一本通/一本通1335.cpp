#include <bits/stdc++.h>

using namespace std;
struct Queue {
    int qi, qj;
};
queue<Queue> q;
bool a[101][101];
int dis[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m, ans;
void dfs(int i, int j) {
    q.push((Queue){i, j});
    a[i][j] = false;
    while (!q.empty()) {
        int x = q.front().qi;
        int y = q.front().qj;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dis[i][0];
            int ny = y + dis[i][1];
            if (nx > 0 && ny > 0 && nx <= n && ny <= m && a[nx][ny]) {
                a[nx][ny] = false;
                q.push((Queue){nx, ny});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] == 1) {
                dfs(i, j);
                ans++;
            }
    cout << ans;
    return 0;
}