#include <bits/stdc++.h>

using namespace std;
int flag = 0, cnt;
int n, m;
int minn = INT_MAX;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char a[1210][1210];
void dfs(int x, int y) {
    if(x >= n || y >= m || x < 0 || y < 0 || a[x][y] == '#') return;
    if(a[x][y] == 'P') {
        flag = 1;
        return;
    }
    if(a[x][y] == 'T') {
        if(flag == 1) {
            minn = min(minn, cnt);
            return;
        }
        else return;
    }
    cnt++;
    for(int i = 0; i < 4; i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        dfs(tx, ty);
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)  
        for(int j = 0; j < m; j++) cin >> a[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] == 'S') {
                dfs(i, j);
                cout << minn;
                return 0;
            }
    return 0;
}