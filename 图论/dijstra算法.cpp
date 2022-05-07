#include <bits/stdc++.h>

using namespace std;
const int N = 100010;
int h[N], vtx[5 * N], nxt[5 * N], w[5 * N], idx = 0;
int dis[N];
int vis[N];
int pre[N];
int n, m, s, t, v, c, wt;
void addEdge(int a, int b) {
	vtx[idx] = b, nxt[idx] = h[a], h[a] = idx, idx++;
}
struct node {
	int u, v, d;
};
bool operator <(node a, node b) {
	if(a.d <= b.d) return 1;
	else return 0;
}
priority_queue<node> nd;
void dij(int s) {
	dis[s] = 0;
	node tmp;
	tmp.u = s;
	tmp.v = s;
	tmp.d = 0;
	nd.push(tmp);
	while(!nd.empty()) {
		tmp = nd.top();
		nd.pop();
		int t = tmp.v;
		if(vis[t] == 1) continue;
		vis[t] = 1;
		int p = h[t];
		while(p != -1) {
			if(vis[vtx[p]] == 0) {
				if(dis[t] + w[p] < dis[vtx[p]]) {
					tmp.u = t;
					tmp.v = vtx[p];
					tmp.d = dis[t] + w[p];
					nd.push(tmp);
					dis[vtx[p]] = dis[t] + w[p];
				}
			}
		}
		p = nxt[p];
	}
}
int main() {
	memset(h, -1, sizeof(h));
	cin >>n >> m >> s >> t;
	return 0;
}
