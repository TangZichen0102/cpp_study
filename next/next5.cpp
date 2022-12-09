#include <bits/stdc++.h>

using namespace std;
const long long mod = 1000000007;
int n;
long long sum = 1, ans;
long long a[105];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum = sum * a[i] % mod;
    }
    for(int i = 1; i <= sum / i; i++)
        if(sum % i == 0) ans = ans + i + sum / i;
    cout << ans;
    return 0;
}