#include <bits/stdc++.h>

using namespace std;
int ans, sum;
string s;

int main() {
	cin >> s;
	int lens = s.size();
	for (int i = 0; i < lens; ++i) {
		if (s[i] == '(') sum++;
		else {
			if (sum) --sum;
			else ++ans, ++sum; 
		}
	}
	ans += sum >> 1;
	cout << ans;
	return 0;
}

