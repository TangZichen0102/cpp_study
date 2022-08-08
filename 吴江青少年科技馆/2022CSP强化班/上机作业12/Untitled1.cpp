#include <bits/stdc++.h>
using namespace std;
map<char, int> m;
int main() {
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++) m[s[i]]++;
	char c;
	cin >> c;
	cout << m[c];
	return 0;
}
