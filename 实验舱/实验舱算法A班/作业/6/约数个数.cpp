#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
map<ll, ll> a;
ll n, m = 1, x;
void fun(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        while (n % i == 0) {
        a[i]++;
        n /= i;
    }
    if (n > 1) a[n]++;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        fun(x);
    }
    for (auto it : a) m = (m * (it.second + 1)) % 1000000007;
    cout << m;
    return 0;
}
