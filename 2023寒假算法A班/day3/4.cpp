#include <bits/stdc++.h>

using namespace std;
int n, k, x;
int a[100005];
int main() {
    cin >> n >> k >> x;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) {
        sort(a + 1, a + n + 1);
        for(int j = 1; j <= n; j += 2) a[j] = (a[j] ^ x);
    }
    sort(a + 1, a + n + 1);
    cout << a[n] << " " << a[1];
    return 0;
}