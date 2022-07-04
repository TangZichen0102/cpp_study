#include <bits/stdc++.h>

using namespace std;
deque<int> q;
int a[10005];
int cnt;
int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int _t;
        cin >> _t;
        q.push_back(_t);
    }
    for(int i = 0; i < m; i++) {
        q.push_front(q.back());
        q.pop_back();
    }
    for(auto it: q) {
        a[cnt++] = it;
    }
    for(int i = 0; i < cnt; i++) {
        if(i == cnt - 1) cout << a[i];
        else cout << a[i] << " ";
    }
    return 0;
}
