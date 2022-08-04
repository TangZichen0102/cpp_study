#include <bits/stdc++.h>

using namespace std;
map<string, map<string, int>> m;
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        int a;
        m[s2][s1] += a;
    }
    for(auto i:m) {
        cout << i.first << endl;
        for(auto j:i.second) {
            cout << "    |----" << j.first << "(" << j.second << ")" << endl;
        }
    }
    return 0;
}