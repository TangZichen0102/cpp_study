#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005], res = 0, x;
int main()
{
    scanf("%lld%lld", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    for (int i = 2; i <= n; i++)
        res = __gcd(res, abs(a[i] - a[i - 1]));
    while (m--)
    {
        scanf("%lld", &x);
        printf("%lld\n", __gcd(a[1] + x, res));
    }
    return 0;
}