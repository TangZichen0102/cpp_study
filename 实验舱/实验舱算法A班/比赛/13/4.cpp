#include <bits/stdc++.h>

using namespace std;
int d[6][3] = {{1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1}};
int n, m, l, t, ans;
bool maze[33][129][65], vis[33][129][65];
struct node {
    int x, y, z;
} cur;
void bfs(int x, int y, int z) {
    queue<node> q;
    q.push({x, y, z});
    int res = 1;
    vis[x][y][z] = true;
    while(!q.empty()) {
        cur = q.front();
        q.pop();
        for(int i = 0; i < 6; i++) {
            int tx = cur.x + d[i][0], ty = cur.y + d[i][1], tz = cur.z + d[i][2];
            if(tx >= 1 && tx <= l && ty >= 1 && ty <= m && tz >= 1 && tz <= n && maze[tx][ty][tz] && !vis[tx][ty][tz]) {
                q.push({tx, ty, tz}), vis[tx][ty][tz] = true, res++;
            } 
        }
    }
    if(res >= t) ans += res;
}
int main() {
    cin >> m >> n >> l >> t;
    for(int i = 1; i <= l; i++)
        for(int j = 1; j <= m; j++) 
            for(int k = 1; k <= n; k++) cin >> maze[i][j][k];
    for(int i = 1; i <= l; i++)
        for(int j = 1; j <= m; j++) 
            for(int k = 1; k <= n; k++)
                if(maze[i][j][k] && !vis[i][j][k]) bfs(i, j, k);
    cout << ans;
    return 0;
}