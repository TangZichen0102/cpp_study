#include <bits/stdc++.h>

using namespace std;
int n, _t;
int x, sum;
multiset<int> s;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> _t;
        s.insert(_t);
    }
    cin >> x;
    int flag = 0;
    for(auto i: s)
        if(i == x) {
            flag = 1;
            break;
        }
    if(flag == 0) s.insert(x), sum++;
    int idx = 0;
    for(auto i: s) {
        idx++;
        if(i == x) break;
    }
    // cout << s.size() - idx << " " << idx - 1 << endl;
    int d1 = s.size() - idx, d2 = idx - 1;
    sum += abs(d1 - d2);
    cout << sum;
    return 0;
}