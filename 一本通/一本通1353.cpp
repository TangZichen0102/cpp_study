#include <bits/stdc++.h>

using namespace std;
stack<char> s;
string a;
int main() {
    getline(cin, s);
    for(int i = 0; i < s.size() - 1; i++) {
        if(a[i] == '(') s.push('(');
        else s.pop();
        if(s.empty() && a[i + 1] == ')') {
            cout << "NO";
            return 0;
        }
    }
    if(!s.empty()) {
        cout << "NO";
        return 0;
    }
    else cout << "YES";
    return 0;
}