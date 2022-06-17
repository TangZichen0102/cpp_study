#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n, x, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		sum += x;
	}	
	long long ans = 1;
	while (ans <= sum) ans *= 2;
	cout << ans / 2;
	return 0;
}