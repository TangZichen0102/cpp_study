#include <bits/stdc++.h>

using namespace std;
int n, ans;
bool vis[1001][1001];
string maze[1001];
int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool isBorder(int x, int y) {
    for(int i = 0; i < 4; i++) {
        int tx = x + d[i][0], ty = y + d[i][1];
        if(tx >= 0 && tx < n && ty >= 0 && ty < n && maze[tx][ty] == '.') return true;
    }
    return false;
}
bool bfs(int x, int y) {
    vis[x][y] = true;
    queue<pair<int, int> > q;
    q.push({x, y});
    int borderCnt = 0, total = 0;
    while(!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        if(isBorder(cur.first, cur.second)) borderCnt++;
        total++;
        for(int i = 0; i < 4; i++) {
            int tx = cur.first + d[i][0], ty = cur.second + d[i][1];
            if(tx >= 0 && tx < n && ty >= 0 && ty < n && maze[tx][ty] == '#' && !vis[tx][ty]) vis[tx][ty] = true, q.push({tx, ty});
        }
    }
    return total == borderCnt;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> maze[i];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(maze[i][j] == '#' && !vis[i][j]) ans += bfs(i, j);
    cout << ans;
    return 0;
}