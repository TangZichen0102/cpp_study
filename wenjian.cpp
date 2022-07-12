#include <bits/stdc++.h>

using namespace std;
int cnt;
void fun(int n) {
    if(n == 1) cout << cnt;
	else if(n % 2 == 0) {
		// cout << n << "-->";
		n = n / 2;
        cnt++;
        fun(n);
	}
	else {
		// cout << n << "-->";
		n = n * 3 + 1;
        cnt++;
        fun(n);
	}
}
int main() {
	int n;
	cin >> n;
	fun(n);
    return 0;
}