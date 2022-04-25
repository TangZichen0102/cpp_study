#include <bits/stdc++.h>

using namespace std;
int dp[10001][10001];
int v[1001], w[1001];

int main() {
    int n, c;
    cin >> n >> c;
    for (int i = 0; i < 6; i++) cin >> v[i] >> w[i];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= c; j++) {
            if (j < w[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
        }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= c; j++)
            cout << dp[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
//f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
