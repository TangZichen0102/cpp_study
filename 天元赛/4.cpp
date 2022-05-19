#include <bits/stdc++.h>

using namespace std;
const int N = 100005;
const long long mod = 1e9 + 7;
int a[N], f[N];
vector<int> G[N];
int dfs(int u) {
    if(f[u] != -1) return f[u];
    f[u] = a[u];
    for(auto v: G[u]) f[u] = max(f[u], dfs(v) + a[u]);
    return f[u]; 
}
int main() {
    int n, m, T;
    cin >> n >> m >> T;
    for(int i = 1; i <= n; i++) cin >> a[i];
    while(m--) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
    }
    memset(f, -1, sizeof(f));
    while(T--) {
        int x, y;
        cin >> x >> y;
        int s1 = dfs(x), s2 = dfs(y);
        cout << s1 << " " << s2 << " ";
        if(s1 > s2) swap(s1, s2);
        int ans = ((__int128)s2 * (s2 + 1) * (s2 - 1) / 3 - (__int128)s1 * (s1 + 1) * (s1 - 1) / 3) % mod;
        cout << ans << endl;
    }
    return 0;
}