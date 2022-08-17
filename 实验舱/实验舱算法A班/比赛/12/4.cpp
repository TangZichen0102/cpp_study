#include <bits/stdc++.h>

using namespace std;
int n, m;
int cnt1, cnt2;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int a[105][105], b[105][105];
void dfs1(int x, int y) {
    if (x >= n || y >= m || x < 0 || y < 0 || a[x][y] == 0) return;
    a[x][y] = 0;
    for (int i = 0; i < 4; i++) dfs1(x + dx[i], y + dy[i]);
}
void dfs2(int x, int y) {
    if (x >= n || y >= m || x < 0 || y < 0 || a[x][y] == 1) return;
    a[x][y] = 1;
    for (int i = 0; i < 4; i++) dfs2(x + dx[i], y + dy[i]);
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j], b[i][j] = a[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 1) {
                cnt1++;
                dfs1(i, j);
            }
        }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) a[i][j] = b[i][j];
    dfs2(0, 0);
    dfs2(0, m - 1);
    dfs2(n - 1, 0);
    dfs2(n - 1, m - 1);
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 0) {
                cnt2++;
                dfs2(i, j);
            }
        }
    if(cnt1 == 1 && cnt2 == 1) cout << 0;
    else if(cnt1 == 1 && cnt2 == 0) cout << 1;
    else cout << -1;
    return 0;
}