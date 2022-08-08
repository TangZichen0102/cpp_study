#include <bits/stdc++.h>

using namespace std;
bool lucky_num(int n) {
	int num1 = n / 100;
	int num2 = (n % 100) / 10;
	int num3 = n % 10;
	if((num1 + num2 + num3) % 6 == 0) return true;
	return false;
}
int main() {
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++) {
		if(lucky_num(i) && lucky_num(i + 3)) cout << i << " " << i + 3 << endl;
	}
	return 0;
}
