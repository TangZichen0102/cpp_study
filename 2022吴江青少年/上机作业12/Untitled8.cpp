#include <bits/stdc++.h>

using namespace std;

int n;
int main() {
	string s;
	cin >> s;
	string s2;
	cin >> n;
	for(int i = 0; i < s.size(); i++) {
		s2 += s[i];
		map<char, int> m;
		int flag = 0;
		for(map<char, int>::iterator it = m.begin(); it != m.end(); it++)
			if(it < n) {
				flag = 1;
				break;
			}
		if(flag == 0) {
			cout << s2.size();
			return 0;
		}
	}
	return 0;
}
