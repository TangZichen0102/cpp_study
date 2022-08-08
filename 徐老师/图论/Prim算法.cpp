#include <bits/stdc++.h>

using namespace std;
int n, m, sum = 0;
int u, v, w;
int G[1001][1001], vmin[1001];
bool b[1001];

void prim() {
    for (int i = 1; i <= n; i++) {
        int k = 0;
        for (int j = 1; j <= n; j++)
            if (b[j] == 0 && vmin[j] < vmin[k]) k = j;
        b[k] = true;
        sum += vmin[k];
        for (int j = 1; j <= n; j++)
            if (b[j] == 0 && vmin[j] > G[k][j]) vmin[j] = G[k][j];
    }
}

int main() {
    cin >> n >> m;
    memset(G, 0x3f, sizeof(G));
    memset(vmin, 0x3f, sizeof(vmin));
    for (int i = 1; i <= m; i++) {
        cin >> u >> v >> w;
        if (u != v && G[u][v] > w) {
            G[u][v] = G[v][u] = w;
        }
    }
    vmin[1] = 0;
    prim();
    cout << sum;
    return 0;
}
