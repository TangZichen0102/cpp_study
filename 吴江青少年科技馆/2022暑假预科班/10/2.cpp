#include <bits/stdc++.h>

using namespace std;
int dfs(int n, int k) {
    if(n == 1 && k == 1) return 0;
    int res = dfs(n - 1, (k + 1) / 2);
    if(res == 0) return !(k & 1);
    return k & 1;
}
int t, n, k;
int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> k;
        cout << dfs(n, k) << endl;
    }
    return 0;
}