#include <bits/stdc++.h>

using namespace std;
int n;
int a[1005]; 
int main() {
	cin >> n;
	for(int i = 0; i< n; i++) cin >> a[i];
	sort(a, a + n);
	for(int i = n - 1; i >= 0; i--) cout << a[i] << " ";
	return 0;
}
