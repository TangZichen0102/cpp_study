#include <bits/stdc++.h>

using namespace std;
stack<char> s;
int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        char c = str[i];
        if(c == '@') break;
        if(c == '(') s.push(c);
        else if(c == ')') {
            if(s.empty()) {
                cout << "NO";
                return 0;
            }
            s.pop();
        }
    }
    if(!s.empty()) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES";
    return 0;
}
