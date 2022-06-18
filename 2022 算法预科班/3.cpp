#include <bits/stdc++.h>

using namespace std;
long long f[25][25][25];

//else if (f[a][b][c] != 0) return f[a][b][c];
//f[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
long long w(long long a, long long b, long long c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    if (f[a][b][c] != 0) return f[a][b][c];
    if (a < b && b < c) f[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    else f[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}

int main() {
    long long a, b, c;
    do {
        cin >> a >> b >> c;
        long long sum = w(a, b, c);
        if (a != -1 || b != -1 || c != -1) cout << sum << endl;
    } while (a != -1 || b != -1 || c != -1);
    return 0;
}