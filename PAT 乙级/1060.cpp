#include <bits/stdc++.h>

using namespace std;
int a[100005];
int ans;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = n; i >= 0; i--) {
        int *t = upper_bound(a, a + n, i);
        int len = t - a;
        if(n - len >= i) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}