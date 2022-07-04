#include <bits/stdc++.h>

using namespace std;
set<int> s;
int n;
int a[10005];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size() << endl;
    for(auto it:s) cout << it << endl;
    return 0;
}