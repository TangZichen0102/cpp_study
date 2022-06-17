#include <bits/stdc++.h>

using namespace std;
int maxn, n;
int sum;
int a[15][15];
int d[8][2] = {{1, -1}, {1, 1}, {-1, 1}, {-1, -1}, {1, 0}, {0, 1}, {-1, 0}, {0, -1}};
void dfs(int x, int y) {
    if(x > n || y > n || x < 0 || y < 0 || a[x][y] == 1) return;
    a[x][y] = 1;
    if(x == n && y == n) sum++;
    for(int i = 0; i < 8; i++) {
        int nx = x + d[i][0];
        int ny = y + d[i][1];
        dfs(nx, ny);
    }
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    for(int i = 1; i <= n; i++)  
        for(int j = 1; j <= n; j++) {
            if(a[i][j] == 0) {
                dfs(i, j);
                maxn += sum;
            }
        }
    cout << maxn;
    return 0;
}