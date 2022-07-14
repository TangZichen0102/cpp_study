#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a;
	cin >> a;
	int sum = a;
	for(int i = 1; i < n; i++) {
		int _t;
		cin >> _t; 
		sum = __gcd(sum, _t);
	} 
	cout << sum;
	return 0;
}
