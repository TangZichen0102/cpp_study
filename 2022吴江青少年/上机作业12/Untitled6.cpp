#include <bits/stdc++.h>

using namespace std;
int my_atoi(string s) {
	long long sum = 0;
	int flag = 1;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] != '-' && s[i] != '+' && s[i] != ' ' && (s[i] < '0' || s[i] > '9')) return 0;
		if(s[i] == '-' && flag == 1)
			flag = -1;
		if(s[i] >= '0' && s[i] <= '9') {
			sum *= 10;
			sum += s[i] - '0';
		}
	}
	return sum * flag;
}
int main() {
	string s;
	cin >> s;
	if(my_atoi(s) < -2147483648) cout << -2147483648;
	else if(my_atoi(s) > 2147483647) cout << 2147483647;
	else cout << my_atoi(s);
	return 0;
}
