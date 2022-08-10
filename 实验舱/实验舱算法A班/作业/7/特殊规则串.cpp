#include <bits/stdc++.h>
using namespace std;
bool pd(string s) {
	int t = s.size();
	if (s == "A") return true;
	else if (s[0] == 'B' && s[t - 1] == 'S' && t != 2 && pd(s.substr(1, t - 2))) return true;
	else
		for (int i = 0; i < t; i++)
			if (s[i] == 'N' && pd(s.substr(0, i)) && pd(s.substr(i + 1, t - i - 1))) return true;
	return false;
}
int main() {
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (pd(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
