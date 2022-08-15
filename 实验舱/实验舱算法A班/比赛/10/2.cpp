#include <bits/stdc++.h>

using namespace std;
int n, maxn;
bool a[101][101];
int vis[101][101];
int b[105];
bool check(int x, int y) {
    for(int i = x - 1; i >= 1 && vis[i][y]; i--)
        if(a[i][y]) return false;
    for(int i = y - 1; i >= 1 && vis[x][i]; i--)
        if(a[x][i]) return false;
    return true;
}
void dfs(int x, int y, int cnt) {
    if(y == n + 1) {
        dfs(x + 1, 1, cnt);
        return;
    }
    if(x == n + 1) {
        maxn = max(maxn, cnt);
        b[cnt]++;
        return;
    }
    if(vis[x][y] && check(x, y)) {
        a[x][y] = true;
        dfs(x, y + 1, cnt + 1);
        a[x][y] = false;
    }
    // cout << x << " " << y << " " << cnt << endl;
    dfs(x, y + 1, cnt);
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> vis[i][j];
    dfs(1, 1, 0);
    for(int i = 1; i <= maxn; i++) cout << b[i] << endl;
    return 0;
}