#include <bits/stdc++.h>

using namespace std;
string s;
int ans =  0;
int main() {
#ifndef ONLINE_JUDGE
    freopen("5.in", "r", stdin);
#endif
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') ans++;
    }
    cout << ans;
    return 0;
}