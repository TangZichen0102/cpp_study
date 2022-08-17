#include <bits/stdc++.h>

using namespace std;
int n, m, t;
struct node {
    int x, y;
}b[210];
int a[8005][8005];
int sum[505];
int cnt, cnt2;
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
void dfs(int x, int y) {
    if (x >= n || y >= m || x < 0 || y < 0 || a[x][y] == 1) return;
    a[x][y] = 1;
    cnt++;
    for (int i = 0; i < 4; i++) dfs(x + d[i][0], y + d[i][1]);
    // cout << x << " " << y << endl;
}
int main() {
    cin >> n >> m >> t;
    for(int i = 0; i < t; i++) {
        cin >> b[i].x >> b[i].y;
        a[b[i].x][b[i].y] = 1;
    }
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 0) {
                cnt = 0;
                dfs(i, j);
                sum[cnt2++] = cnt;
            }
        }
    cout << cnt2 << endl;
    sort(sum, sum + cnt2);
    for(int i = 0; i < cnt2; i++) cout << sum[i] << " ";
    return 0;
}