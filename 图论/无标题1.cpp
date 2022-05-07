#include<bits/stdc++.h>

using namespace std;
int n;
int sum = 1;
int main() {
	cin >> n;
	for(int i = 1;; i++) {
		if(sum == n) {
			cout << i << endl;
			return 0;
		}
		sum = sum * 2;
	}
	return 0;
}

