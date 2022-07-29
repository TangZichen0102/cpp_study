#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int t = (b - a) / 100.0 + 0.5;
	printf("%02d:%02d:%02d", t / 3600, t % 3600 / 60, t % 60);
	return 0;
}