#include <bits/stdc++.h>

using namespace std;
long long f[1001][2];
long long n, x;

int main() {
    f[1][1] = 1;
    f[1][0] = 9;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        x = f[1][0];
        if (i == n) x--;
        f[i][0] = (f[i - 1][0] * x + f[i - 1][1]) % 12345;
        f[i][1] = (f[i - 1][1] * x + f[i - 1][0]) % 12345;
    }
    cout << f[n][0] << endl;
    return 0;
}