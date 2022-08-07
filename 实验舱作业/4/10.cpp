#include <bits/stdc++.h>

using namespace std;
long long n, a[100005], ans, mid;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        ans += abs(a[n / 2] - a[i]);
    }
    cout << ans;
    return 0;
}