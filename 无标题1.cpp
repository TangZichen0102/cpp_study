#include <bits/stdc++.h>

using namespace std;
const int N = 15;
int n, m, t, x, y;
char maps[N][N], vis[N][N], cnt;
int d[8][2] = {{-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {1, 2}, {1, -2}};

void dfs(int x, int y, int step) {
	int nx, ny;
	if (step == n * m) {
		cnt++;
		return;
	}
	for (int i = 0; i < 8; i++) {
		nx = x + d[i][0];
		ny = y + d[i][1];
		if (nx >= 0 && ny >= 0 && nx <= n && ny <= m && !vis[nx][ny]) {
			vis[nx][ny] = 1;
			dfs(nx, ny, step + 1);
			vis[nx][ny] = 0;
		}
	}
}
int main() {
	cin >> t;
	while (t--) {
		cnt = 0;
		memset(vis, 0, sizeof(vis));
		cin >> n >> m >> x >> y;
		vis[x][y] = 1;
		dfs(x, y, 1);
		cout << cnt << endl;
	}
	return 0;
}

