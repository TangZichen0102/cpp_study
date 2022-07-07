#include <bits/stdc++.h>

using namespace std;
int a, b, c;

void p(int &x, int y) {
	int m , n;
	m = x * y; x += 5; y += 5; n  = x* y;
	cout << setw(4) << m << setw(4) << n << endl;
}
int main() {
	a = 3; b= 3; p(a, b); p(a, b);
	return 0;
}
