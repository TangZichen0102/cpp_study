#include <bits/stdc++.h>

using namespace std;
bool compare(int m, int n) {
	string s1, s2, s3, s4;
	s1 = to_string(m);
	s2 = to_string(n);
	s3 = s1 + s2;
	s4 = s2 + s1;
	if(s3 > s4) return true;
	else return false;
}
int n, t;
int a[1005];
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n - 1; i++)
		for(int j = 0; j < n - 1 + i; j++)
			if(compare(a[j], a[j + 1]) == false) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	for(int i = 0; i < n; i++) cout << a[i];
	return 0;
}