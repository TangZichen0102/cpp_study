#include <bits/stdc++.h>

using namespace std;
int k, n;

int main() {
    freopen("P7303.in", "r", stdin);
	cin >> k >> n;
	if(n == 1) {
		cout << k;
		return 0;
	}
	for(int i = 1; i <= n - 1; i++) {
		k -= i;
		cout << k;
	}
    cout << k;
	return 0;
}
