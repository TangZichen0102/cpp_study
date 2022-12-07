#include <bits/stdc++.h>

using namespace std;
long long x, y, ans;
long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}
int main() {
    cin >> x >> y;
    if(x == y) {
        cout << 1;
        return 0;
    }
    long long sum = x * y;
    for(int i = 3; i <= sum / i; i++) {
        if(sum % i == 0 && gcd(i, sum / i) == x) ans++;
    }
    cout << ans * 2;
    return 0;
}