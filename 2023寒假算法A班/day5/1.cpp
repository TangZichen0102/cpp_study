#include <bits/stdc++.h>

using namespace std;
long long n, sum;
int a[200010];
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] -= i;
    }
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++) sum += abs(a[i] - a[(n + 1) / 2]);
    cout << sum;
    return 0;
}