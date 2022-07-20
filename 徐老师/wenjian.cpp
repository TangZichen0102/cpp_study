#include <bits/stdc++.h>

using namespace std;
int sum1, sum2, sum3, sum4;
int main() {
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= 'a' && s[i] <= 'z') sum2++;
		else if(s[i] >= 'A' && s[i] <= 'Z') sum1++;
		else if(s[i] >= '0' && s[i] <= '9') sum3++;
		else sum4++;
	}
	cout << sum1 << endl << sum2 << endl << sum3 << endl << sum4;
    return 0;
}