#include <bits/stdc++.h>

using namespace std;
int a, b, n, m;
string s;
unordered_map<string, int> mp;
int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> s;
        mp[s]++;
    }
    for(int i = 0; i < n; i++) {
        int t;
        bool flag = false;
        string ans;
        cin >> s >> t;
        ans = s + ":";
        for(int j = 0; j < t; j++) {
            cin >> s;
            if(mp[s]) ans = ans + " " + s, b++, flag = true;
        }
        if(flag) a++, cout << ans << endl;
    }
    cout << a << " " << b;
    return 0;
}