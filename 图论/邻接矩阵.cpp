#include<bits/stdc++.h>

using namespace std;
int v[101][101];
int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		int a, x, y;
		cin >> a >> x >> y;
		if(a == 0) v[x][y] = 1;
		else {
			v[x][y] = 1;
			v[y][x] = 1;
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) cout << v[i][j] << " ";
		cout << endl;
	}
	return 0;
}
