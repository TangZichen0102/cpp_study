#include <bits/stdc++.h>

using namespace std;
int n;
int maxn = -INT_MAX, minn = INT_MAX;
int main() {
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) {
			int a;
			cin >> a;
			maxn = max(maxn, a);
			minn = min(minn, a);
		}
	cout << maxn << " " << minn;
    return 0;
}
