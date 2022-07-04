#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        map<char, int> mp;
        int l = 0, r = 0;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            if(s[i] == 'P') l = i;
            if(s[i] == 'T') r = i;
        }
        if(mp['P'] == 1 && mp['T'] == 1 && mp['A'] >= 1 && mp.size() == 3 && (r - l - 1) >= 1 && l * (r - l - 1) == s.size() - 1 - r) cout << "YES"  << endl;
        else cout << "NO" << endl;
    }
    return 0;
}