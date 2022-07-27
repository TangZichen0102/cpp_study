#include <bits/stdc++.h>

using namespace std;
unordered_map<char, int> m;
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) m[s[i]]++;
    while(true) {
        if(m['P'] == 0 && m['A'] == 0 && m['T'] == 0 && m['e'] == 0 && m['s'] == 0 && m['t'] == 0) return 0;
        if(m['P'] != 0) cout << 'P', m['P']--;
        if(m['A'] != 0) cout << 'A', m['A']--;
        if(m['T'] != 0) cout << "T", m['T']--;
        if(m['e'] != 0) cout << "e", m['e']--;
        if(m['s'] != 0) cout << "s", m['s']--;
        if(m['t'] != 0) cout << "t", m['t']--;
    }
    return 0;
}