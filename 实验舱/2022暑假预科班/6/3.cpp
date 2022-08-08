#include <bits/stdc++.h>

using namespace std;
int n, m, x, y, r;
char c[105][105];
int main() {
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> n >> m >> x >> y >> r;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) cin >> c[i][j];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(abs(i - x) + abs(j - y) <= r) cout << c[i][j];
            else cout << '*';
        }
        cout << endl;
    }
    return 0;
}