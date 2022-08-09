#include <bits/stdc++.h>

using namespace std;
const int MAXN = 9e6 + 5;
using LL = long long;
LL n;
bool st[MAXN];
LL primes[MAXN], cnt;
void get_primes(int n)
{
	st[1] = 0;
	for (LL i = 2; i <= n; i++) 
	{
		if (st[i] == 0)
			continue;
		primes[cnt++] = i;
		for (int j = i + i; j <= n; j += i)
			st[j] = 0;
	}
}
LL s[MAXN];
int main()
{
#ifndef ONLINE_JUDGE
	freopen("D.in", "r", stdin);
#endif
	LL ans = 0;
	memset(st, 1, sizeof(st));
	get_primes(MAXN);
	for (LL i = 1; i <= MAXN; i++)
		s[i] = s[i - 1] + st[i];
	cin >> n;
	for (LL i = 1; i < cnt; i++)
	{
		LL x = primes[i] * primes[i] * primes[i];
		if (x >= n)
			break;
		ans += s[min(n / x, primes[i] - 1)];
	}
	cout << ans;
	return 0;
}