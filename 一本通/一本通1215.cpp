#include <bits/stdc++.h>

using namespace std;
char a[105][105];
int n, flag, vis[105][105]; 
int ha, la, hb, lb;
int k;
int dx[] = {0, 0, -1, 1},
    dy[] = {-1, 1, 0, 0};

void dfs(int x, int y)
{
    int nx, ny;
    if (flag == 1) return;
    if (x == hb && y == lb) {
        flag = 1;
        return;
    }
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i]; 
        ny = y + dy[i];
        if (flag == 0 && nx >= 0 && nx < n && ny >= 0 && ny < n && a[nx][ny] == '.' && !vis[nx][ny]) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> k;
    while (k--) {
        cin >> n;
        memset(a, 0, sizeof(a));
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> ha >> la >> hb >> lb;
        if (a[ha][la] == '#' || a[hb][lb] == '#') {
            cout << "NO" << endl;
            flag = 0;
            continue;
        }
        dfs(ha, la);
        if (flag == 1) cout << "Yes" << endl;
        else cout << "NO" << endl;
        flag = 0;
    }
    return 0;
}