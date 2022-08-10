/*
题目来源
试验舱
#1696 阶乘分解
给定整数 n,试把阶乘 n! 分解质因数,按照底数pi 指数ci 的形式输出分解结果
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int MAXN = 1e6 + 10;

LL n, m, sum;
int primes[MAXN], cnt;
bool st[MAXN];

int ans[MAXN];

void get_primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            primes[cnt++] = i;

        for (int j = 0; primes[j] <= n / i; j++)
        {
            int t = primes[j] * i;
            st[t] = true;
            if (i % primes[j] == 0)
                break;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1696.in", "r", stdin);
#endif
    cin >> n;
    get_primes(n);

    for (int i = 0; i < cnt; i++)
    {
        int t = n, pi = primes[i];

        // if (primes[i] > t)
        //     break;

        while (t)
        {
            ans[pi] += t / pi;
            t /= pi;
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        if (ans[primes[i]] > 0)
            cout << primes[i] << " " << ans[primes[i]] << endl;
    }
    return 0;
}
/*
样例及推导
in
5

out
2 3
3 1
5 1
*/