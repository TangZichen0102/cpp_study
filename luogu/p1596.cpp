#include <bits/stdc++.h>

using namespace std;
string a[1001];
int ans;
int n, m;
int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, -1, 1};

void dfs(int x, int y) {
    a[x][y] = '.';
    int xx, yy;
    for (int i = 0; i <= 8; i++) {
        xx = x + dx[i];
        yy = y + dy[i];
        if (xx >= 0 && xx <= n && yy >= 0 && yy < m && a[xx][yy] == 'W') dfs(xx, yy);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i <= n; i++) cin >> a[i];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == 'W') {
                dfs(i, j);
                ans++;
            }
    cout << ans;
    return 0;
}