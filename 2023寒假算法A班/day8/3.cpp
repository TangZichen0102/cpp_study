#include <bits/stdc++.h>

using namespace std;
int n, a[100005], cnt = 1;
struct node {
    int idx, sroce;
} _t;
stack<node> s;
int main () {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> _t.sroce;
        _t.idx = i;
        if(s.empty() || (s.top().sroce > 0 && _t.sroce > 0) || (s.top().sroce < 0 && _t.sroce < 0)) s.push(_t);
        else if((_t.sroce > 0 && s.top().sroce < 0) || (_t.sroce < 0 && s.top().sroce > 0)) {
            if(abs(_t.sroce) >= abs(s.top().sroce)) s.pop();
        }
    }
    cout << s.size() << endl;
    if(s.size() == 0) return 0;
    while(!s.empty()) {
        a[cnt++] = s.top().idx;
        s.pop();
    }
    for(int i = cnt - 1; i >= 1; i--) cout << a[i] << " ";
    return 0;
}