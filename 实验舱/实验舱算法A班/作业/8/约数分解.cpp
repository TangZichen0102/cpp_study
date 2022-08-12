#include <bits/stdc++.h>

using namespace std;
int a[100005], n;
void dfs(int num, int deep, int pre) {
	if (num == 1 && deep > 2) {
		cout << n << '=';
		for (int i = 1; i < deep; i++) cout << a[i] << "*\n"[i == deep - 1];
		return;
	}
	for (int i = pre; i <= num; i++)
		if (num % i == 0) {
			a[deep] = i;
			dfs(num / i, deep + 1, i);
		}
}
int main() {
	cin >> n;
	dfs(n, 1, 2);
	return 0;
}
