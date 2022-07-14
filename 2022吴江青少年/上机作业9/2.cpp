#include <bits/stdc++.h>

using namespace std;
int n, m, d;
void tri(int n, int k) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n - i + k; j++) cout << " ";
		for(int j = 1; j <= 2 * i - 1; j++) cout << "*";
		cout << endl;
	}
}
void christmas_tree(int n, int m, int d) {
	int cnt1 = m;
	int cnt2 = (n - 1) * d;
	for(int i = 1; i <= n; i++) {
		tri(m, cnt2);
		cnt2 -= 2;
		m += 2;
	}
}
int main() {
	cin >> n >> m >> d;
	christmas_tree(n, m, d);
	return 0;
}
