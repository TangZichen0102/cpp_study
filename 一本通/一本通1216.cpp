#include <bits/stdc++.h>
using namespace std;
int n, m, a[30][30], ans;
int sx, sy;
char ch;
int dx[] = {-1, 0, 1, 0},
    dy[] = {0, -1, 0, 1};
void dfs(int x, int y) {
    for(int i = 0; i < 4; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(xx < 1 || xx > n || yy < 1 || yy > m) continue;
        if(a[xx][yy] == 0) {
            a[xx][yy] = 1;
            ans++;
            dfs(xx, yy);
        }
    }
}
int main() {
    cin >> n >> m;
    while(n != 0 && m != 0) {
        memset(a, 0, sizeof(a));
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++) {
                cin >> ch;
                if(ch == '#') a[i][j] = 1;
                if(ch == '@') {
                    sx = i, sy = j;
                    a[i][j] = 1;
                }
            }
        ans = 1;
        dfs(sx, sy);
        cout << ans << endl;
        cin >> m >> n;
    }
    return 0;
}