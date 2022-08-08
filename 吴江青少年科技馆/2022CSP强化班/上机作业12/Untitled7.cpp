#include <bits/stdc++.h>

using namespace std;
string s;
string s2;
int main() {
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		map<char, int> m;
		s2 += s[i];
		for(int j = 0; j < s2.size(); j++) 
		{
			m[s2[j]]++;
			if(m[s2[j]] >= 2) {
				cout << s2.size() - 1;
				return 0;
			}
		}
	}
	return 0;
}
