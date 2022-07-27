#include <bits/stdc++.h>

using namespace std;
int a[105];
int n, sum;
int main() {
#ifndef ONLINE_JUDGE
    freopen("1056.in", "r", stdin);
#endif
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j != i) {
                int ans = 10 * a[i] + a[j];
                // cout << ans << " ";
                sum += ans;
            }
        }
    }
    cout << sum;
    return 0;
}