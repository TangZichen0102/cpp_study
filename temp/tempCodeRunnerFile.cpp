#include <bits/stdc++.h>

using namespace std;
map<string, int> m;
string s[1005];
int n, st, k;
int main() {
    cin >> n >> k >> st;
    for(int i = 1; i <= n; i++) cin >> s[i];
    if(st > n) cout << "Keep going..." << endl;
    else {
        for(int i = st; i <= n;) {
            if(!m[s[i]]) cout << s[i] << endl, m[s[i]]++, i += k;
            else i++;
        }
    }
    return 0;
}