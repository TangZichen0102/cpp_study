#include <bits/stdc++.h>

using namespace std;
int fun(int m) {
	int sum = 0;
	for(int i = 1; i <= m; i++) 
		if(m % i == 0) sum += i;
	return sum;
}
int main() {
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++) {
		int sum = fun(i);
		for(int j = i; j <= b; j++) {
			if(fun(j) == fun(i) && fun(j) == j + i + 1) cout << i << " " << j << endl;
		}
	}
	return 0;
}
