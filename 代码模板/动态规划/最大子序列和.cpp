#include <bits/stdc++.h>

using namespace std;
int a[1010], dp[1010];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    dp[0] = a[0];
    for(int i = 1; i < n; i++)
        dp[i] = max(a[i], dp[i - 1] + a[i]);
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans = max(ans, dp[i]);
    cout << ans;
    return 0;
}
