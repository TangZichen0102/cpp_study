#include <bits/stdc++.h>

using namespace std;
int x, y, n, m;
int a[100005], b[100005];
int main() {
    cin >> x >> y >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for(int i = 1; i <= m; i++) {
        cin >> b[i];
        b[i] += b[i - 1];
    }
    for(int i = n - 1; i >= 1; i--) a[i] = min(a[i], a[i + 1]);
    for(int i = m - 1; i >= 1; i--) b[i] = min(b[i], b[i + 1]);
    int ans = INT_MAX, t = abs(x - y);
    for(int i = 0; i <= n; i++)
        if(t - i <= m) ans = min(ans, max(a[i], b[t - i]));
    cout << ans;
    return 0;
}