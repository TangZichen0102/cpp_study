#include <bits/stdc++.h>

using namespace std;
int main() {
	string s;
	cin >> s;
	string _t = s;
	reverse(_t.begin(), _t.end());
	if(_t == s) cout << "Yes";
	else cout << "No";
	return 0;
}
