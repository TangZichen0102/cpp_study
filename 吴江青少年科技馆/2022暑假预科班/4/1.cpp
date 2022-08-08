#include<bits/stdc++.h>

using namespace std;
long long n, a, b, k;
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> k;
        long long sum = k / 2 * (a - b) + (k % 2 == 1 ? a : 0);
        cout << sum << endl;
    }
    return 0;
}