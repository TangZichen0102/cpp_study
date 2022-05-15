#include <bits/stdc++.h>

using namespace std;
const int MAXN = 9e6 + 5;
using u64 = long long;
u64 n;
bool st[MAXN];
u64 primes[MAXN], cnt;
void get_primes(int n) {
	st[1] = 0;
	for (u64 i = 2; i <= n; i++) {
		if (st[i] == 0) continue;
		primes[cnt++] = i;
		for (int j = i + i; j <= n; j += i)	st[j] = 0;
	}
}
u64 s[MAXN];
int main() {
	//freopen("D.in", "r", stdin);
	u64 ans = 0;
	memset(st, 1, sizeof(st));
	get_primes(MAXN);
	for(u64 i = 1; i <= MAXN; i++) s[i] = s[i - 1] + st[i];
	cin >> n;
	for(u64 i = 1; i < cnt; i++) {
		u64 x = primes[i] * primes[i] * primes[i];
		if(x >= n) break;
		ans += s[min(n / x, primes[i] - 1)];
	}
	cout << ans;
	return 0;
}