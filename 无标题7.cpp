#include<bits/stdc++.h>

using namespace std;
int n, x, y;
int Map[1001][1001];
int d[1001];
int min_s = 10001, max_s = 0;
int path[100001];
int cur;
void dfs(int s) {
	for(int i = min_s; i <= max_s; i++) {
		if(Map[s][i]) {
			Map[s][i]--;
			Map[i][s]--;
			dfs(i);
		}
	}
	path[cur++] = s;
}
int main() {
	memset(Map, 0, sizeof(Map));
	memset(d, 0, sizeof(d));
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		Map[x][y]++;
		Map[y][x]++;
		d[x]++, d[y]++;
		min_s = min(min_s, min(x, y));
		max_s = max(max_s, max(x, y));
	}
	int start = min_s;
	for(int i = 0; i < max_s; i++)
		if(d[i] % 2 == 1) {
			start = i;
			break;
		}
	dfs(start);
	for(int i = cur - 1; i >= 0; i--) cout << path[i] << endl;
	return 0;
}
