#include <bits/stdc++.h>

using namespace std;
int n, a, p;
long long ans;
long long t(int i) {
    return ((i % 2 == 1 ? -1 : 1) * (i + a)) % p;
}
long long d(int i) {
    int sum = 0;
    for(int j = 1; j <= i / j; j++)
        if(i % j == 0) sum++;
    return sum;
}
int main() {
    cin >> n >> a >> p;
    for(int i = 1; i <= n; i++) ans += t(i) * d(i);
    cout << ans;
    return 0;
}