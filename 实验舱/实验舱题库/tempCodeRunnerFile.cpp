#include <bits/stdc++.h>

using namespace std;
int n, m;
int sum;
string a[1005];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void dfs(int x, int y) {
    if(x > n || y > m || x < 1 || y < 1 || a[x][y] == '.') return;
    a[x][y] = '.';
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        dfs(nx, ny);
    }
}
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++)  
        for(int j = 1; j <= m; j++) {
            if(a[i][j] == '#') {
                sum++;
                dfs(i, j);
            }
        }
    cout << sum;
    return 0;
}