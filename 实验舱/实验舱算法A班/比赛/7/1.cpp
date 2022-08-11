#include <bits/stdc++.h>

using namespace std;
set<int, greater<int> > s;
int main() {
    int n;
    cin >> n;
    while(n--) {
        int _t;
        cin >> _t;
        s.insert(_t);
    }
    if(s.size() <= 1) {
        cout << -1;
        return 0;
    }
    int a, b, c;
    int cnt = 0;
    for(auto i:s) {
        cnt++;
        if(cnt == 1) a = i;
        if(cnt == 2) b = i;
        if(cnt == 3) c = i;
    }
    cout << max(c, a % b);
    return 0;
}