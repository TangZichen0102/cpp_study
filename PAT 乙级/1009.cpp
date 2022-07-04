#include <bits/stdc++.h>

using namespace std;
string s;
string s2[85];
int cnt = 0;
int main() {
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') cnt++, i++;
        else {
            for(int j = i; s[j] != ' '; j++) s2[cnt] += s[j];
        }
    }
    for(int i = cnt - 1; i >= 0; i--) cout << s2[i] << " ";
    return 0;
}