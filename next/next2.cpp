#include <bits/stdc++.h>

using namespace std;
string s;
int main() {
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
        if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    int cnt = 1;
    char c = s[0];
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == c) cnt++;
        else {
            cout << "(" << c << "," << cnt << ")";
            cnt = 1, c = s[i];
        }
    }
    cout << "(" << c << "," << cnt << ")";
    return 0;
}