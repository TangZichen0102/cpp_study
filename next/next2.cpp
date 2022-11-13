#include <bits/stdc++.h>

using namespace std;
string s;
stack<char> s2;
int main() {
    getline(cin, s);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') s2.push('(');
        if(s[i] == ')') {
            if(s2.empty()) {
                cout << "NO";
                return 0;
            }
            s2.pop();
        }
    }
    if(!s2.empty()) cout << "NO";
    else cout << "YES";
    return 0;
}