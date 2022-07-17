#include <bits/stdc++.h>

using namespace std;
int my_atoi(string s) {
	int sum = 0;
	int flag = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '-' && flag == 0)
			flag = 1;
		if(s[i] >= '0' && s[i] <= '9') {
			sum *= 10;
			sum += s[i] - '0';
		}
	}
	if(flag == 1) return -sum;
	return sum;
}
int main() {
	string s;
	cin >> s;
	if(my_atoi(s) < -2147483648) cout << -2147483648;
	else if(my_atoi(s) > 2147483647) cout << 2147483647;
	else cout << my_atoi(s);
	return 0;
}
