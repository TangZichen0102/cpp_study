#include<bits/stdc++.h>

using namespace std;
const int N = 1000;
int vtx[2 * N], h[N], nxt[2 * N], idx;
int vis[N];
int n, m, a, x, y;
void addEdge(int a, int b) {
	vtx[idx] = b, nxt[idx] = h[a], h[a] = idx++;
}

void dfs(int k) {
	int p = h[k];
	cout << k;
	while(p != 0) {
		cout << p << " " << vtx[p] << endl;
		if(!vis[vtx[p]]) {
			vis[vtx[p]] = 1;
			dfs(vtx[p]);
			p = nxt[p];
		}
	}
}
int main() {
	memset(h, -1, sizeof(h));
	cin >> n >> m;
	while(m--) {
		cin >> x >> y;
		addEdge(x, y);
	}
	vis[1] = 1;
	dfs(1);
	return 0;
}

