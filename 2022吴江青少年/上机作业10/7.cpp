#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[1005], b[1005];
int main() {
	cin >> n >> m;
	int ans = n;
	for(int i = 1; i <= n; i++) a[i] = i;
	int cnt = 0;
	while(ans != 0) {
		// cout << "11" << endl;
		for(int i = 1; i <= n; i++) {
			if(b[i] == 1) continue;
			cnt++;
			if(cnt == m) {
				cnt = 0;
				ans--;
				cout << a[i] << " ";
				b[i] = 1;
			}
		}
	}
	return 0;
}
