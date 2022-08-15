#include <bits/stdc++.h>

using namespace std;
int t, n, a[200005];
char f[200005];
int main() {
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        scanf("%s", f + 1);
        int pos = 1;
        while(pos <= n) {
            int pre = pos;
            while(pos <= n && f[pos] == '1') pos++;
            sort(a + pre, a + pos + 1);
            pos++;
        }
        cout << (is_sorted(a + 1, a + 1 + n) ? "YES" : "NO") << endl;
    }
    return 0;
}