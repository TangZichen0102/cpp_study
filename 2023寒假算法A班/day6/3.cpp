#include <bits/stdc++.h>

using namespace std;
long long T, n, m, k, fac[2000005], pos;
int main() {
    cin >> T;
    while(T--) {
        cin >> n >> m >> k;
        pos = 0;
        long long g = __gcd(n, m);
        for(long long i = 1; i * i <= g; i++)
            if(g % i == 0) {
                fac[++pos] = i;
                if(i * i != g) fac[++pos] = g / i;
            }
        if(pos < k) puts("-1");
        else {
            sort(fac + 1, fac + 1 + pos);
            printf("%lld\n", fac[pos - k + 1]);
        }
    }
    return 0;
}