#include <bits/stdc++.h>

using namespace std;
long long _t1, _t2;
long long sum = 0;
int main() {
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++) {
        long long r, c;
        cin >> r >> c;
        // cout << sum << " " << _t1 << " " << _t2 << endl;
        _t1 = max(r, c) - min(r, c);
        if(i == 0) sum += r + c;
        else sum += r + c - _t2;
        // cout << sum << " " << _t1 << " " << _t2 << endl;
        _t2 = _t1 - _t2;
    }
    cout << sum;
    return 0;
}