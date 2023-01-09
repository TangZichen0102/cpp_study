#include <bits/stdc++.h>

using namespace std;
map<string, int> a;
string s;
int n, m;
int main() {
    cin >> n;
    while(n--) {
        cin >> s;
        a[s] = 1;
    }
    cin >> m;
    while(m--) {
        cin >> s;
        if(a[s] == 1) {
            cout << "OK" << endl;
            a[s] = 2;
        }
        else if(a[s] == 2) cout << "REPEAT" << endl;
        else cout << "WRONG" << endl;
    }
    return 0;
}