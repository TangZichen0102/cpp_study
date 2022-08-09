#include <bits/stdc++.h>

using namespace std;
long long n;
long long a[100005];
long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}
int main() {
    cin >> n >> a[0] >> a[1];
    long long sum = gcd(a[0], a[1]);
    for(long long i = 2; i < n; i++) {
        cin >> a[i];
        // cout << a[i] << " ";
        sum = gcd(sum, a[i]);
    }
    cout << sum;
    return 0;
}