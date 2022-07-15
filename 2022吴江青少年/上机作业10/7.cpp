#include <bits/stdc++.h>

using namespace std;
int n, k; 
int a[1005];
int b[1005];
int cnt = 0;
int main() {
	cin >> n >> k;
	int ans = n;
	int cnt = 0;
	for(int i = 1; i <= n; i++) a[i] = i;
	while(ans == 1) {
		for(int i = 1; i <= n; i++) {
			if(b[i] == 1) continue;
			if(cnt % k == 0) {
				b[cnt] = 1;
				cnt -= k;
				ans--;
				continue;
			}
		}
	}
	for(int i = 1; i <= n; i++)
		if(b[i] == 0) {
			cout << a[i];
			return 0;
		}
	return 0;
}
