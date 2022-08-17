#include <bits/stdc++.h>

using namespace std;
int n, t, m, x, ans;
int a[100005];
struct node {
    int s, t;
} h;
queue<node> q;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t >> m;
        while (!q.empty()) {
            h = q.front();
            if (h.t + 86400 <= t) {
                a[h.s]--;
                if (a[h.s] == 0) ans--;
                q.pop();
                continue;
            }
            break;
        }
        for (int j = 1; j <= m; ++j) {
            cin >> x;
            h.s = x, h.t = t;
            q.push(h);
            a[x]++;
            if (a[x] == 1) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
