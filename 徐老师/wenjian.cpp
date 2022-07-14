/*
#include <bits/stdc++.h>

using namespace std;
int n;
bool is_prime(int n) {
	if(n == 1) return false;
	for(int i = 2; i <= n / i; i++) 
		if(n % i == 0) return false;
	return true;
}
int main() {
	cin >> n;
	for(int i = 1; i <= n / 2; i++) {
		if(is_prime(i) && is_prime(n - i)) printf("%d+%d=%d\n", i, n - i, n);
	}
	return 0;
}
*/