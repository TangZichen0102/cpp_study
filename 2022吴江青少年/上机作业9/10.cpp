#include <bits/stdc++.h>

using namespace std;
long long fib(long long n) {
	if(n == 1) return 1;
	if(n == 2) return 2;
	return fib(n - 1) + fib(n - 2); 
}
int main() {
	long long n;
	cin >>n;
	cout << fib(n);
	return 0;
}
