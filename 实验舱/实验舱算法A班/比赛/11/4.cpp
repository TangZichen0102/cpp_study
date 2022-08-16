#include <bits/stdc++.h>

using namespace std;
map<string, int> m;
int main() {
	long long sum = 2;
	for(int i = 0; i <= 62; i++) {
		m[to_string(sum)] = 1;
		sum *= 2;
	}
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		
	}
	return 0;
}