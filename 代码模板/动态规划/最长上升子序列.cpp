#include <bits/stdc++.h>

using namespace std;
vector<int> a, dp;
vector<int> b;
int main() {
    int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int _t;
		cin >> _t;
		a.push_back(_t);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		dp.push_back(1);
		for (int j = 0; j < i; j++)
			if (a[i] > a[j]) dp[i] = max(dp[j] + 1, dp[i]);
		if(ans > dp[i]) {
			ans = dp[i];
			b.push_back(a[i]);
		}
	}
	cout << "max=" << ans << endl;
	for(int i = b.size() - 1 - ans; i < b.size(); i++) cout << b[i] << " ";
    return 0;
}
