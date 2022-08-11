/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int N = 1e6 + 10;

int primes[N], cnt, n;
bool st[N];

void get_primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            primes[cnt++] = i;
        for (int j = 0; primes[j] <= n / i; j++)
        {
            st[primes[j] * i] = true;
            if (i % primes[j] == 0)
                break;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> n;
    get_primes(n);

    LL sum = 0;
    for (int i = 1; i < cnt; i++) //右侧大的质数从3开始取
    {
        for (int j = 1; j * primes[i] <= n; j++)
        {
            // cout << "i:" << i << " pi:" << primes[i] << " j:" << j << endl;
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
/*
样例及推导

*/