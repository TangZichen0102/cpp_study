#include <bits/stdc++.h>

using namespace std;
long long n, res[35];
long long w, t;
bool check() {
    for(int i = 1; i <= 32; i++) {
        if(res[i] == w - 1 || res[i] == w) res[i + 1]++;
        else if(res[i] != 1 && res[i] != 0) return false;
    }
    return true;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> w >> t;
        memset(res, 0, sizeof(res));
        int pos = 0;
        while(t) {
            res[++pos] = t % w;
            t /= w;
        }
        cout << (check() ? "Yes" : "No") << endl;
    }
    return 0;
}