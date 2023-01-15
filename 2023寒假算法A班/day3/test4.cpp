#include <bits/stdc++.h>

using namespace std;
set<int> a;
int n, x;
string s;
int main() {
    set<int>::iterator t;
    cin >> n;
    for (int i = 1; i <= n; i++) a.insert(i);
    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s[0] == 'N') {
            cout << *a.begin() << endl;
            a.erase(a.begin());
        }
        else {
            cin >> x;
            t = a.find(x);
            if (t != a.end()) cout << "Failed" << endl;
            else {
                cout << "Successful" << endl;
                a.insert(x);
            }
        }
    }
    return 0;
}