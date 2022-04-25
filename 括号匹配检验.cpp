#include <bits/stdc++.h>

using namespace std;
string a;

int main() {
    stack<char> s;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') s.push('(');
        if (a[i] == '[') s.push('[');
        if (a[i] == '{') s.push('{');
        if (a[i] == '<') s.push('<');
        if (a[i] == ')')
            if (s.size() > 0 && s.top() == '(')s.pop();
            else {
                cout << "Wrong";
                return 0;
            }
        if (a[i] == ']')
            if (s.size() > 0 && s.top() == '[') s.pop();
            else {
                cout << "Wrong";
                return 0;
            }
        if (a[i] == '}')
            if (s.size() > 0 && s.top() == '}')s.pop();
            else {
                cout << "Wrong";
                return 0;
            }
        if (a[i] == '>')
            if (s.size() > 0 && s.top() == '>')s.pop();
            else {
                cout << "Wrong";
                return 0;
            }
    }
    if (s.size() == 0) cout << "OK";
    else cout << "Wrong";
    return 0;
}
