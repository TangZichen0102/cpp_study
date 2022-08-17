#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[1005][1005], b[1005][1005], cnt;
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
void dfs(int x, int y) {
    if (x >= n || y >= m || x < 0 || y < 0 || a[x][y] == 1) return;
    a[x][y] = 1;
    cnt++;
    // cout << x << " " << y << endl;
    for (int i = 0; i < 4; i++) {
        int tx = x + d[i][0];
        int ty = y + d[i][1];
        dfs(tx, ty);
    }
}               
int main() {    
    cin >> n >> m;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) cin >> a[i][j], b[i][j] = a[i][j];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cnt = a[i][j] = 0;
            dfs(i, j);
            cout << cnt << " ";
            for(int k = 0; k < n; k++)
                for(int l = 0; l < m; l++) a[k][l] = b[k][l];
        }
        cout << endl;
    }
    return 0;
}