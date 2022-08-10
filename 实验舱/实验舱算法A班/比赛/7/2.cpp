#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
const int N = 1e7 + 10;
int primes[N], euler[N], cnt;
bool st[N];
void get_euler(int n) {
    for(int i = 2; i <= n; i++) {
        if(!st[i]) {
            primes[cnt++] = i;
            euler[i] = i - 1;
        }
        for(int j = 0; primes[j] <= n / i; j++) {
            int t = primes[j] * i;
            st[t] = true;
            if (i % primes[j] == 0) {
                euler[t] = euler[i] * primes[j];
                break;
            }
            euler[t] = euler[i] * (primes[j] - 1);
        } 
    }
}
int main() {
    int n;
    cin >> n;
    get_eulers(n);
    LL res = 0;
    for (int i = 2; i <= n; i++) res += euler[i];
    cout << res << endl;
    return 0;
}