#include <bits/stdc++.h>

using namespace std;
int n;

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		int maxn = -INT_MAX, minn = INT_MAX;
		for(int j = 0; j < n; j++) {
			int a;
			cin >> a;
			maxn = max(maxn, a);
			minn = min(minn, a);
		}
		cout << maxn << " " << minn << endl;
	}
    return 0;
}
