#include <bits/stdc++.h>

using namespace std;
vector<int> a, dp;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        a.push_back(0);
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        dp.push_back(1);
        for (int j = 0; j < i; j++)
            if (a[i] > a[j])
                dp[i] = max(dp[j] + 1, dp[i]);
        ans = max(ans, dp[i]);
    }
    for (int i = 0; i < n; i++)
        cout << dp[i] << " ";
    cout << endl;
    cout << ans;
    return 0;
}
