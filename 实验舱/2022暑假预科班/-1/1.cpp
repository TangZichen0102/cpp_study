#include <bits/stdc++.h>

using namespace std;
int n, sum;
int a[105];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i <= n / 2 + 1; i++) {
        int d = a[i] / 2 + 1;
        sum += d;
    }
    cout << sum;
    return 0;
}