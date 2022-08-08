#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1001;
int g[MAXN][MAXN];
int d[MAXN];
int vis[MAXN];
int n, m;
int k;
void dfs(int u) {
	for(int v = 1; v <= n; v++)
		if(g[u][v]) {
			g[u][v] = 0;
			g[v][u] = 0;
			dfs(v);
		}
	k++;
	vis[k] = u;
}
int main() {
	cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		g[x][y] = 1;
		g[y][x] = 1;
		d[x]++;
		d[y]++;
	}
	int s = 1;
	for(int i = 1; i <= n; i++) {
		if(d[i] % 2 == 1) {
			s = i;
			break;
		}
	}
	dfs(s);
	for(int i = 1; i <= k; i++) cout << vis[i] << " ";
	return 0;
}
