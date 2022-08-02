#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = a * b;
    string s = to_string(sum);
    reverse(s.begin(), s.end());
    while(s.size() > 1 && s[0] == '0') s = s.substr(1);
    cout << s;
    return 0;
}