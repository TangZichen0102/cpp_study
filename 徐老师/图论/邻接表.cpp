#include <bits/stdc++.h>

using namespace std;
const int N = 1001;
int h[N], vtx[N], nxt[2 * N], idx;
int n, m, a, x, y;
void addEdge(int a, int b) {
	vtx[idx] = b, nxt[idx] = h[a], h[a] = idx, idx++;
}

int main() {
	cin >> n >> m;
	memset(h, -1, sizeof(h));
	for(int i = 0; i < m; i++) {
		cin >> a >> x >> y;
		if(a) addEdge(y, x);
		addEdge(x, y);
	}
	for(int i = 0; i < n; i++) {
		int p = h[i];
		cout << i << ":";
		while(p != -1) {
			cout << " " << vtx[p];
			p = nxt[p];
		}
		cout << endl;
	}
	return 0;
}
