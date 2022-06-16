#include <bits/stdc++.h>
using namespace std;
stack <char> s;
int n, len;
string str;
bool cnt;
int main() {
	cin >> n;
	getchar();
	while (n --) {
		cin >> str;
		while (!s.empty()) s.pop();
		cnt = true;
		len = str.length();
		for (int i = 0; i < len; i ++) {
			if (str[i] == '<') s.push(str[i]);
			else if (str[i] == '(') {
				if (!s.empty())
					if (s.top() == '<') {
						cnt = false;
						break;
					}
				s.push(str[i]);
			}
			else if (str[i] == '[') {
				if (!s.empty())
					if (s.top() == '(' || s.top() == '<') {
						cnt = false;
						break;
					}
				s.push(str[i]); 
			}
			else if (str[i] == '{') {
				if (!s.empty()) 
					if (s.top() == '[' || s.top() == '(' || s.top() == '<') {
						cnt = false;
						break;
					}
				s.push(str[i]); 
			}
			else if (str[i] == '>')
				if (!s.empty())
					if (s.top() == '<')	s.pop();
					else {
						cnt = false;
						break;
					}
				else {
					cnt = false;
					break;
				}
			else if (str[i] == ')') 
				if (!s.empty())
					if (s.top() == '(') s.pop();
					else {
						cnt = false;
						break;
					}
				else {
					cnt = false;
					break;
				}
			else if (str[i] == ']')
				if (!s.empty())
					if (s.top() == '[') s.pop();
					else {
						cnt = false;
						break;
					}
				else {
					cnt = false;
					break;
				}
			else if (str[i] == '}')
				if (!s.empty())
					if (s.top() == '{') s.pop();
					else {
						cnt = false;
						break;
					}
				else {
					cnt = false;
					break;
				}
		}
		if (s.empty() && cnt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}