/*
题目来源
AcWing 888. 求组合数 IV
https://www.acwing.com/problem/content/890/
输入 a,b，求 Cba 的值。

注意结果可能很大，需要使用高精度计算。

输入格式
共一行，包含两个整数 a 和 b。

输出格式
共一行，输出 Cba 的值。

数据范围
1≤b≤a≤5000
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int N = 5010;
int primes[N], cnt;
int st[N];
int sum[N];

void get_primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            primes[cnt++] = i;
        for (int j = 0; primes[j] <= n / i; j++)
        {
            st[i * primes[j]] = true;
            if (i % primes[j] == 0)
                break;
        }
    }
}

int get(int n, int p)
{
    int res = 0;
    while (n)
    {
        res += n / p;
        n /= p;
    }
    return res;
}

vector<int> mul(vector<int> a, int b)
{
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size(); i++)
    {
        t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    while (t)
    {
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    int a, b;
    cin >> a >> b;

    get_primes(a);

    // 5 * 4 * 3 / 3/2
    for (int i = 0; i < cnt; i++)
    {
        int p = primes[i];
        sum[i] = get(a, p) - get(b, p) - get(a - b, p);

        // printf("sum[%d]:%d\n", primes[i], sum[i]);
    }

    vector<int> res;
    res.push_back(1);

    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < sum[i]; j++)
        {
            res = mul(res, primes[i]);
        }
    }

    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }

    return 0;
}
/*
样例及推导
输入样例：
5 3
输出样例：
10
*/