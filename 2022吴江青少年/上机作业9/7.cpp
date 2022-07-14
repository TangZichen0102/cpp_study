#include <bits/stdc++.h>

using namespace std;
int fib(int n) {
	if(n == 1) return 1;
	return n * fib(n - 1);
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << fib(m) / (fib(n) * fib(m - n));
	return 0;
}
