#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a;
	cin >> n >> m >> a;
	cout << (long long)(ceil(n / (double) (a)) * ceil(m / (double) (a)));
	return 0;
}