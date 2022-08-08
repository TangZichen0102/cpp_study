#include <bits/stdc++.h>

using namespace std;
int maxn, n;
int sum;
int a[15][15];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void dfs(int x, int y) {
    if(x > n || y > n || x < 0 || y < 0 || a[x][y] == 0) return;
    a[x][y] = 0;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        dfs(nx, ny);
    }
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    for(int i = 1; i <= n; i++)  
        for(int j = 1; j <= n; j++) {
            if(a[i][j] == 1) {
                sum++;
                dfs(i, j);
            }
        }
    cout << sum;
    return 0;
}