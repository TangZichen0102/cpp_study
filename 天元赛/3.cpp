#include <bits/stdc++.h>

using namespace std;
long long f[100005][3];
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        f[i][0] = max({f[i - 1][0], f[i - 1][1], f[i - 1][2]});
        f[i][1] = f[i - 1][0] + x;
        f[i][2] = f[i - 1][1] + x;
    }
    cout << max({f[n][0], f[n][1], f[n][2]});
    return 0;
}