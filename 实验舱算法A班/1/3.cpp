#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[500005];
bool b = 1;
int main() {
// #ifndef ONLINE_JUDGE
//     freopen("3.in", "r", stdin);
// #endif
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) {
        int op;
        cin >> op;
        if(op == 1) {
            int k;
            cin >> k;
            if(b) cout << a[k] << endl;
            else cout << a[n - k + 1] << endl;
        }
        if(op == 2) {
            int k, x;
            cin >> k >> x;
            if(b) a[k] = x;
            else a[n - k + 1] = x;
        }
        if(op == 3) {
            b = !b;
        }
    }
    return 0;
}