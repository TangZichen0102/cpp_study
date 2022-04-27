#include<bits/stdc++.h>

using namespace std;
int n, m, t;
int ox, oy, cx, cy;
int sum;
int a[100001][100001];
void dfs(int x, int y, int sum) {
	if(x == cx && y == cy) sum++;
	if(a[x][y] == 0 || x > n || y > m || x < 0 || y < 0) return;
	else {
		a[x][y] = 0;
		dfs(x + 1, y, sum);
		dfs(x, y + 1, sum);
		dfs(x, y - 1, sum);
		dfs(x - 1, y, sum);
	}
}
int main() {
	cin >> n >> m >> t;
	cin >> ox >> oy >> cx >> cy;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++) a[i][j] = 1;
	for(int i = 0; i < t; i++) {
		int x, y;
		cin >> x >> y;
		a[x][y] = 0;
	}
	dfs(ox, oy, 0);
	cout << sum;
	return 0;
} 
