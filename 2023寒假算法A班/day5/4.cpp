#include <bits/stdc++.h>

using namespace std;
int a[1000000];
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    n = unique(a + 1, a + n + 1) - a - 1;
    if (n < 2) {
        cout << -1;
        return 0;
    }
    else {
        cout << max(a[n - 2], a[n] % a[n - 1]);
        return 0;
    }
    return 0;
}
