#include <bits/stdc++.h>

using namespace std;
int a[105][105];
int dp[105][105];
int main() {
    int n;
    cin >> n;
    while(n--) {
        int r, c;
        cin >> r >> c;
        for(int i = 1; i <= r; i++)
            for(int j = 1; j <= c; j++) cin >> a[i][j];
        for(int i = 1; i <= r; i++)
            for(int j = 1; j <= c; j++) dp[i][j] = max(dp[i -1][j], dp[i][j - 1]) + a[i][j];
        cout << dp[r][c] << endl;
    }
    return 0;
}