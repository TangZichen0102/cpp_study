#include <bits/stdc++.h>

using namespace std;

int n, m, ans;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int a[105][105];

void dfs(int x, int y) {
    if (x > n || y > m || x < 0 || y < 0 || a[x][y] == 0) return;
    a[x][y] = 0;
    for (int i = 0; i < 4; i++) dfs(x + dx[i], y + dy[i]);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
            if (a[i][j]) ans++, dfs(i, j);
    cout << ans;
    return 0;
}