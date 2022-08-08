#include <bits/stdc++.h>

using namespace std;
int n, m;
int sum = 0;
int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> n >> m;
    if(n == 1 && m == 1) {
        cout << 0;
        return 0;
    }
    // cout << n << " " << m << endl;
    while(true) {
        if(n <= 0 || m <= 0) {
            cout << sum;
            return 0;
        }
        sum++;
        if(n == 1) n++, m -= 2;
        else if(m == 1) n -= 2, m++;
        else {
            if(n >= m) m++, n -= 2;
            else if(m > n) n++, m -= 2;
        }
        // cout << n << " " << m << endl;
    }
    cout << sum;
    return 0;
}