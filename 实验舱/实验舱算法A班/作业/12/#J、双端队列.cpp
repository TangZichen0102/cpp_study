#include <bits/stdc++.h>

using namespace std;
int n;
deque<int> dq;
int main() {
#ifndef ONLINE_JUDGE
    freopen("J.in", "r", stdin);
#endif
    cin >> n;
    while(n--) {
        int t;
        cin >> t;
        if(t == 0) {
            int d, x;
            cin >> d >> x;
            if(d == 0) dq.push_front(x);
            else dq.push_back(x);
        }
        else if(t == 1) {
            int idx;
            cin >> idx;
            cout << dq[idx] << endl;
        }
        else {
            int d;
            cin >> d;
            if(d == 0) dq.pop_front();
            else dq.pop_back();
        }
    }
    return 0;
}