#include <bits/stdc++.h>

using namespace std;
int G[101][101] = {0};
int in[101], out[101];

int main() {
    int n, m, u, v;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        G[u][v] = 1;
        in[v]++;
        out[u]++;
    }
    int k = 1;
    for (int i = 1; i <= n; i++) {
        if (in[i] == 0) cout << i << endl;
        if (out[i] > out[k]) k = i;
    }
    cout << k << endl;
    for (int i = 1; i <= n; i++)
        if (G[k][i] == 1)
            cout << i << " ";
    return 0;
}
