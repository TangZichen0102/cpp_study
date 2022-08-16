#include <bits/stdc++.h>

using namespace std;
map<string, int> m;
string s;
int n;
int main() {
	long long sum = 1;
	for(int i = 0; i <= 62; i++) {
		string t =  to_string(sum);
		sort(t.begin(), t.end());
		m[t] = 1;
		sum *= 2;
	}
	cin >> n;
	while(n--){
		cin >> s;
		sort(s.begin(), s.end());
		cout << (m[s] == 1 ? "Yes": "No") << endl;
	}
	return 0;
}