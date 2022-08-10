#include <bits/stdc++.h>

using namespace std;
string s;

int main() {
    getline(cin, s);
    int top = 0;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == '(') top++;
        else if (s[i] == ')') {
            if (top > 0) top--;
            else {
            	cout << "No";
            	return 0;
			}
        }
    }
    if (top != 0) cout << "No";
    else cout << "Yes";
    return 0;
}