#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
int sum, n, dp[2005][2005];
int main() {
    cin >> n >> sum;
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= 6; j++) 
            for(int k = j; k <= sum; k++) dp[i][k] = (dp[i][k] + dp[i - 1][k - j]) % mod;
    cout << dp[n][sum];
    return 0;
}