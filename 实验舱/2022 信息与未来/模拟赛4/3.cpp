#include <bits/stdc++.h>

using namespace std;
#define INF 0x3f3f3f3f
int n, s, x, y, tms, ans = INF, dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
char op, idx[135];
map<int, map<int, int>> vis;
int main() {
    idx['E'] = 0, idx['W'] = 1, idx['S'] = 2, idx['N'] = 3;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> op >> s;
        while(s--) {
            tms++;
            int p = idx[op];
            x += dir[p][0], y += dir[p][1];
            if(vis[x][y]) ans = min(ans, tms - vis[x][y]);
            vis[x][y] = tms;
        }
    }
    cout <<(ans == INF ? -1 : ans);
    return 0;
}