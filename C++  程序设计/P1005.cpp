#include <bits/stdc++.h>

using namespace std;
int main() {
    string s;
    cin >> s;
    if(s[2] == '0' && s[1] != '0' && s[0] != '0') cout << s[1] << s[0];
    else if(s[2] == '0' && s[1] == '0' && s[0] != '0') cout << s[0];
    else if(s[2] != '0' && s[1] != '0' && s[0] != '0') cout << s[2] << s[1] << s[0];
    return 0;
}