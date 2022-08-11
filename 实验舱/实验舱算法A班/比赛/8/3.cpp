#include <bits/stdc++.h>

using namespace std;
int n, ans;
bool vis[10005][10005];
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i ++ )
        if (x % i == 0)
            return false;
    return true;
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i != j) {
                int a = i / gcd(i, j);
                int b = j / gcd(i, j);
                if(is_prime(a) && is_prime(b) && !vis[j][i]) {
                    ans++;
                    vis[i][j] = true;
                }
            }
        }
    }
    cout << ans;
    return 0;
}