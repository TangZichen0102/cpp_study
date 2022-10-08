#include <bits/stdc++.h>

using namespace std;
const int N = 1e7 + 10;
int n;
int primes[N], euler[N], cnt;
bool st[N];
void get_euler(int n)
{
    euler[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
        {
            primes[cnt++] = i;
            euler[i] = i - 1;
        }
        for (int j = 0; primes[j] <= n / i; j++)
        {
            int t = primes[j] * i;
            st[t] = true;
            if (i % primes[j] == 0)
            {
                euler[t] = euler[i] * primes[j];
                break;
            }
            euler[t] = euler[i] * (primes[j] - 1);
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("1006.in", "r", stdin);
#endif
    get_euler(N);
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        int ans = 0;
        for (int i = 0; i < cnt && primes[i] < a; i++)
            ans++;
        printf("%d %d\n", ans, euler[a]);
    }
    return 0;
}