#include <bits/stdc++.h>

using namespace std;
int n, d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}, k;
char maze[301][301];
bool vis[301][301];
struct node {
    int x, y, t;
};
bool check(int x, int y, int step) {
    int w = 2;
    if(step >= k && step < 2 * k) w = 1;
    else if(step >= 2 * k) w = 0;
    for(int tx = x - w; tx <= x + w; tx++)
        for(int ty = y - w; ty <= y + w; ty++) 
            if(tx <= 0 || tx > n || ty <= 0 || ty > n || maze[tx][ty] == '*') return false;
    return !vis[x][y];
}
int cnt = 0;
int bfs() {
    vis[3][3] = true;
    queue<node> q;
    q.push({3, 3, 0});
    while(!q.empty()) {
        node cur = q.front();
        q.pop();
        if(cur.x == n - 2 && cur.y == n - 2) return cur.t;
        if(cur.t < 2 * k) q.push({cur.x, cur.y, cur.t + 1});
        for(int i = 0; i < 4; i++) {
            int tx = cur.x + d[i][0], ty = cur.y + d[i][1];
            if(check(tx, ty, cur.t)) {
                vis[tx][ty] = true; 
                q.push({tx, ty, cur.t + 1});
                // cout << tx << " " << ty << " " << cur.t + 1 << endl;
            }
        }
    }
    return -1;
}
int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) scanf("%s", maze[i] + 1);
    cout << bfs();
    return 0;
}