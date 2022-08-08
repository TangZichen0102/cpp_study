#include <bits/stdc++.h>

using namespace std;
int n;
int a[105][105];
int sum;
int main() {
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) cin >> a[i][j];
	for(int i = 0; i < n; i++) {
		int maxn = INT_MIN, minn = INT_MAX;
		int x, y;
		for(int j = 0; j < n; j++) {
			maxn = max(maxn, a[i][j]);
			x = i, y = j; 
		} 
		for(int j = 0; j < n; j++) minn = min(minn, a[y][j]);
		if(maxn == minn) {
			cout << x << " " << y << " " << a[x][y] << endl;
			sum++;
		} 
	}
	if(sum == 0) cout << "NO";
	return 0; 
} 
