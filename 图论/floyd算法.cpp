#include <bits/stdc++.h>

using namespace std;
const int N = 110;
double dis[N][N];
int x[N], y[N];
int n, m, a, b, s, t;

void floyd() {
    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j) dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
}

int main() {
    memset(dis, 127, sizeof(dis));
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];
    for (int i = 1; i <= n; i++) dis[i][i] = 0;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        double d = sqrt((x[a] - x[b]) * (x[a] - x[b]) + (y[a] - y[b]) * (y[a] - y[b]));
        dis[a][b] = dis[b][a] = d;
    }
    floyd();
    cin >> s >> t;
    cout << fixed << setprecision(2) << dis[s][t];
    return 0;
}

//状态转移方程式：dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j])
