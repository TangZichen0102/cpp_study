#include <bits/stdc++.h>

using namespace std;
int t, n;
int a[1005][1005];
bool check1() {
    for(int j = 1; j <= n; j++) {
        int sum = 0;
        for(int k = 1; k <= n; k++) sum += a[k][j];
        if(sum > 1) return false;
    }
    return true;
}
bool check2() {
    for(int k = n; k >= 1; k--) {
        int sum = 0;
        int i = k, j = 1;
        while(i > n) sum += a[i++][j++];
        if(sum > 1)  return false;
    }
    for(int k = 2; k <= n; k++) {
        int sum = 0;
        for(int i = 1, j = k; i <= n; i++, j++) sum += a[i][j];
        if(sum > 1) return false;
    }
    return true;
}
bool check3() {
    for(int k = n; k >= 1; k--) {
        int sum = 0;
        int i = k, j = 1;
        while(i > n) sum += a[j++][i++];
        if(sum > 1) return false;
    }
    for(int k = 2; k <= n; k++) {
        int sum = 0;
        for(int i = 1, j = k; i <= n; i++, j++) sum += a[j][i];
        if(sum > 1) return false;
    }
    return true;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        memset(a, 0, sizeof(a));
        for(int j = 1; j <= n; j++) {
            int _t;
            cin >> _t;
            a[j][_t] = 1;
        }
        if(check1() && check2() && check3()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}