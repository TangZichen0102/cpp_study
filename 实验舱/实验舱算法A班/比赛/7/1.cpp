#include <bits/stdc++.h>

using namespace std;
set<int, greater<int> > s;
int n;
int a[200005];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) s.insert(a[i] % a[j]);
        }
    }
    if(s.size() < 2) {
        cout << -1;
        return 0;
    }
    int cnt = 0;
    for(auto i: s) {
        if(cnt == 1) {
            cout << i;
            return 0;
        }
        else cnt++;
    }
    return 0;
}