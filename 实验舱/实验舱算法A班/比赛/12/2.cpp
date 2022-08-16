#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[105][105], cnt;
int dx[8] = {-1, 0, 1, 0};
int dy[8] = {0, -1, 0, 1};
int b[105][105];
void dfs(int x, int y) {
    if (x > n || y > m || x < 0 || y < 0 || a[x][y] == 1) return;
    a[x][y] = 1;
    cnt++;
    for (int i = 0; i < 4; i++) dfs(x + dx[i], y + dy[i]);
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) cin >> a[i][j], b[i][j] = a[i][j];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 0) {
                cnt = 0;
                dfs(i, j);
                cout << cnt << " ";
            }
            else {
                a[i][j] = cnt = 0;
                dfs(i, j);
                a[i][j] = 1;
                cout << cnt << " ";
            }
            for(int k = 0; k < n; k++)
                for(int l = 0; l < m; l++) a[i][j] = b[i][j];
        }
        cout << endl;
    }
    return 0;
}