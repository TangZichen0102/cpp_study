#include <bits/stdc++.h>

const int MAXN = 1e6+5;
using namespace std;
struct node{
	int x, y;
}a[MAXN];
bool cmp(node a, node b) {
	return a.x < b.x;
}
int dp[MAXN];
int n;
int ans;
int LIS1() {
	for(int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++)
			if (a[i].y > a[j].y) dp[i] = max(dp[j] + 1, dp[i]);
	}
	for(int i = 0; i < n; i++) ans = max(ans, dp[i]);
	return ans;
}


int main() {
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i].x >> a[i].y;
	sort(a, a + n, cmp);
	cout << LIS1();
	return 0;
}
