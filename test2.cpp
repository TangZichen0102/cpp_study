#include <bits/stdc++.h>

using namespace std;

int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}
int t, n, s[1005], ans, p1, p2;
int main() {
    t = read();
    while (t--) {
        n = read();
        for (int i = 1; i <= n; i++) s[i] = read();
        sort(s + 1, s + n + 1);
        ans = 0;
        while (n > 0) {
            if (n == 1) ans += s[1];
            else if (n == 2) ans += s[2];
            else if (n == 3) {
                ans += s[1] + s[2] + s[3];
                break;
            }
            else {
                p1 = s[n] + s[n - 1] + 2 * s[1];
                p2 = s[2] * 2 + s[1] + s[n];
                ans += min(p1, p2);
            }
            n -= 2;
        }
        cout << ans << endl;
    }
    return 0;
}