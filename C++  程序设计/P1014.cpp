#include <bits/stdc++.h>

using namespace std;
string s;
int main() {
    cin >> s;
    if((s[0] - '0') * (s[0] - '0') * (s[0] - '0') + 
       (s[1] - '0') * (s[1] - '0') * (s[1] - '0') + 
       (s[2] - '0') * (s[2] - '0') * (s[2] - '0') == atoi(s.c_str())) cout << "Yes";
    else cout << "No";
    return 0;
}