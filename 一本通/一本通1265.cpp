#include <bits/stdc++.h>

using namespace std;
const int maxn = 5005;
string s1, s2;
int dp[maxn][maxn];
int main() {	
	cin >> s1 >> s2;
	for(int i = 1; i <= s1.size(); i++)
		for(int j = 1; j <= s2.size(); j++) {
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			if(s1[i - 1] == s2[j - 1]) dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
		}
	cout << dp[s1.size()][s2.size()];
	return 0;
}