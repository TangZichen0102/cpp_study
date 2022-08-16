#include<bits/stdc++.h>

using namespace std;
int n, m, ans[100002], x, y, f[1002][1002];
char s[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int r, int c, int z, int cnt) {
    if (r < 0 || r >= n || c < 0 || c >= n || f[r][c] != -1 || s[r][c] - '0' != z) return;
    f[r][c] = cnt;
    ans[cnt]++;
    for(int i = 0; i < 4; i++)  dfs(r + dx[i], c + dy[i], !z, cnt);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> s[i];
    memset(f, -1, sizeof(f));
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--, y--;
        if (f[x][y] == -1) dfs(x, y, s[x][y] - '0', i);
        else ans[i] = ans[f[x][y]];
    }
    for (int i = 0; i < m; i++) cout << ans[i] << endl;
    return 0;
}
