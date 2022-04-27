#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const int MAXN = 1e6 + 10;

LL a[MAXN],dp[MAXN];

int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	dp[1] = a[1];
	for(int i=2;i<=n;i++){
		dp[i] = max(dp[i-1]+a[i],a[i]);
	}

	LL ans = LLONG_MIN;
	for(int i=1;i<=n;i++){
		ans = max(ans,dp[i]);
	}
	
	cout << ans;
	return 0;
}
