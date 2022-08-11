#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e6 + 10;
bool st[maxn];
int cnt, primes[maxn];
int sum;
void get_prime(int n) {
    for(int i = 2; i <= n; i++) {
        if(!st[i]) primes[cnt++] = i;
        for(int j = 0; primes[j] <= n / i; j++) {
            st[i * primes[j]] = true;
            if(i % primes[j] == 0) break;
        }
    }
}
int main() {
    int n;
    cin >> n;
    get_prime(n);
    for(int i = 0; i < cnt; i++) {
        for(int j = 1; j * primes[i] <= n; j++) sum += i;
    }
    cout << sum;
    return 0;
}