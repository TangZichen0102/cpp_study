#include <bits/stdc++.h>

using namespace std;
string s, _t;
int n, cnt;
int main() {
    cin >> s >> n;
    getchar();
    while(getline(cin, _t)) {
        if(_t == "#") break;
        if(_t == s) {
            cout << "Welcome in" << endl;
            break;
        }
        else {
            cnt++;
            cout << "Wrong password: " << _t << endl;
            if(cnt == n) {
                cout << "Account locked" << endl;
                break;
            }
        }
    }
    return 0;
}