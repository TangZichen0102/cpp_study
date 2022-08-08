#include <bits/stdc++.h>

using namespace std;
int n;
string s[1005];
bool cmp(string s1, string s2) {
    return s1 > s2;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> s[i];
    sort(s, s + n, cmp);
    for(int i = 0; i < n; i++) cout << s[i];
    return 0;
}