#include <bits/stdc++.h>

using namespace std;
int n, k, a[25];
long long ans;
bool is_prime(int a) {
    for (int i = 2; i <= a / i; i++)
        if (a % i == 0) return false;
    return true;
}
void dfs(int m, int sum, int deef) {
    if (m == k) {
        if (is_prime(sum)) ans++;
        return;
    }
    for (int i = deef; i < n; i++) dfs(m + 1, sum + a[i], i + 1);
}
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    dfs(0, 0, 0);
    cout << ans;
    return 0;
}