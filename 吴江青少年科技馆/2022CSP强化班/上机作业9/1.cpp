#include <bits/stdc++.h>

using namespace std;
int n, m;
void tri(int n, int k) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n - i + k; j++) cout << " ";
		for(int j = 1; j <= 2 * i - 1; j++) cout << "*";
		cout << endl;
	}
}
int main() {
	cin >> n >> m;
	tri(n,m);
	return 0;
}
