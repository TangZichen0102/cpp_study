#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}