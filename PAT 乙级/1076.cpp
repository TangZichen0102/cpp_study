#include <bits/stdc++.h>

using namespace std;
unordered_map<char, int> m = {{'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}};
string s;
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        string _t[4];
        for(int j = 0; j < 4; j++) cin >> _t[i];
        for(int j = 0; j < 4; j++) {
            char c1 = _t[i][0], c2 = _t[i][2];
            if(c2 == 'T') {
                s += m[c1] + '0';
                break;
            }
        }
        cout << i << endl;
    }
    cout << s;
    return 0;
}