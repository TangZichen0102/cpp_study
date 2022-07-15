#include <bits/stdc++.h>

using namespace std;
int n;
int a[1005];
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	if(n % 2 == 0) cout << (double)((a[n / 2] + a[n / 2 + 1]) / 2.0);
	else cout << a[n / 2 + 1];
	return 0;
}
