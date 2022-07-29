#include <bits/stdc++.h>

using namespace std;
int a[9];
int n, m;
int main() {
	cin >> n >> m;
	for(int i = n; i <= m; i++) {
		string s = to_string(i);
		for(int j = 0; j < s.size(); j++) a[s[j] - '0']++; 
	}
	int maxn = 0;
	int idx;
	for(int i = 0; i < 9; i++) {
		if(a[i] > maxn) {
			idx = i;
			maxn = a[i];
		}
	}
	cout << idx;
	return 0;
}