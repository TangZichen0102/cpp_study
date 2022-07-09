#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string _t = s;
    reverse(s.begin(), s.end());
    if(s == _t) cout << "Yes";
    else cout << "No";
    return 0;
}