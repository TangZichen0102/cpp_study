#include <bits/stdc++.h>

using namespace std;
int t;
int main() {
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        int sum1 = 0, sum2 = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int _t;
            cin >> _t;
            cnt += _t;
            sum1 += floor((double)(_t / m));
        } 
        cout << sum1 << " ";
        sum2 = ceil((double)(cnt / m));
        cout << sum2 << endl;
    }
    return 0;
}