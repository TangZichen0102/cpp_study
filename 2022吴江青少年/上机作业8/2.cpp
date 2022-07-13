#include <bits/stdc++.h>

using namespace std;
int n, m;
bool is_prime(int n) {
	if(n == 1) return false;
	for(int i = 2; i <= n / i; i++) 
		if(n % i == 0) return false;
	return true;
}
bool is_super_prime(int n) {
    while(n) {
        if(!is_prime(n)) return false;
        n /= 10;
    }
    return true;
}
int cnt;
int main() {
    int n, m;
    cin >> n >> m;
    for(int i = n; i <= m; i++) {
        if(is_super_prime(i)) {
            cout << i << " ";
            cnt ++;
            if(cnt == 5) {
                cnt = 0;
                cout << endl;
            }
        }
    }
	return 0;
}