#include <bits/stdc++.h>

using namespace std;
int n;
string _t;
int main() {
    for(int i = 0; i < n; i++) {
        cin >> _t;
        unordered_map<char, int> m;
        for(int j = 0; j < n; j++) {
            m[_t[j]]++;
            if(_t[j] != 'P' && _t[j] != 'A' && _t[j] != 'T') {
                cout << "NO" << endl;
                break;
            }
        }
        if(m['A'] >= 1 && m['P'] >= 1 && m['T'] >= 1) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}