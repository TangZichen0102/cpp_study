#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
int n;
LL ans;
const int maxn = 1e7 + 10;
int primes[maxn], cnt, st[maxn], el[maxn];
void get_euler(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
        {
            primes[cnt++] = i;
            el[i] = i - 1;
        }
        for (int j = 0; primes[j] <= n / i; j++)
        {
            st[primes[j] * i] = true;
            if (i % primes[j])
            {
                el[primes[j] * i] = el[i] * primes[j];
                break;
            }
            el[primes[j] * i] = el[i] * (primes[j] - 1);
        }
    }
}
int main()
{
    cin >> n;
    get_euler(n);
    for (int i = 2; i <= n; i++)
        ans += el[i];
    cout << ans;
    return 0;
}