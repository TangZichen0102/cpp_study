#include <bits/stdc++.h>

using namespace std;
int n, m, x, y;
string s[55];
vector<string> v;
int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> s[i];
		string _t1 = s[i];
		reverse(s[i].begin(), s[i].end());
		string _t2 = s[i];
		s[i] = _t1 + _t2;
	}
	cin >> x >> y;
	for(int i = 1; i <= n; i++) v.push_back(s[i]);
	for(int i = n; i >= 1; i--) v.push_back(s[i]);
	for(int i = 1; i <= 2 * n; i++)
		for(int j = 1; j <= 2 * m; i++) {
			if(i == x && j == y) cout << (v[i][j] == '#' ? '.' : '?');
			else cout << v[i][j];
		}
	return 0;
}

//5 4
//#.#.
//#.##
//#.##
//....
//.#.#
