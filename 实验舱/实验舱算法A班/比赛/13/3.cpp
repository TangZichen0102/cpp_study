#include <bits/stdc++.h>

using namespace std;
int n, m, t;
int x, y;
bool a[10005][10005];
int sum[505];
int cnt, cnt2;
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
void dfs(int x, int y) {
    if (x >= n || y >= m || x < 0 || y < 0 || a[x][y] == true) return;
    a[x][y] = true;
    cnt++;
    for (int i = 0; i < 4; i++) dfs(x + d[i][0], y + d[i][1]);
}
int main() {
    cin >> n >> m >> t;
    for(int i = 0; i < t; i++) {
        cin >> x >> y;
        a[x][y] = true;
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] == 0) {
                cnt = 0;
                dfs(i, j);
                sum[cnt2++] = cnt;
            }
    cout << cnt2 << endl;
    sort(sum, sum + cnt2);
    for(int i = 0; i < cnt2; i++) cout << sum[i] << " ";
    return 0;
}
