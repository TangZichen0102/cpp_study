#include <bits/stdc++.h>

using namespace std;
string s;
int main() {
    cin >> s;
    string _t = s;
    reverse(s.begin(), s.end());
    if(_t == s) cout << "Yes";
    else cout << "No";
    return 0;
}