#include <bits/stdc++.h>

using namespace std;
int n;
int a[105][105];
int main() {
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) cin >> a[i][j];
	for(int i = 0; i < n; i++) {
		int maxn = INT_MIN, minn = INT_MAX;
		for(int j = 0; j < n; j++) {
			maxn = max(maxn, a[j][i]);
			minn = min(minn, a[j][i]);
		}
		cout << maxn << " " << minn << endl;
	}
	return 0; 
} 
