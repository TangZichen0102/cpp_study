#include <bits/stdc++.h>

using namespace std;
int n;
int a[10001][10001], dp[10001][10001];
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= i; j++) cin >> a[i][j];
	dp[1][1] = a[1][1];
	for(int i = 2; i <= n; i++) 
		for(int j = 2; j <= i; j++)
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + a[i][j];
	cout << dp[n][n];
	return 0;
}
