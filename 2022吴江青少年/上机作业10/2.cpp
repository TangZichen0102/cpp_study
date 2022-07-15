#include <bits/stdc++.h>

using namespace std;
int n;
int cnt;
int a[1005];
int main() {
	cin >> n;
	a[1] = a[2] = 1;
	for(int i = 3; i <= n; i++) a[i] = a[i - 1] + a[i - 2];
	for(int i = 1; i <= n; i++) {
		cout << left << setw(8) << a[i];
		cnt++;
		if(cnt == 5) {
			cout << endl;
			cnt -= 5;
		}
	}
	return 0;
}
