/*
886. 求组合数 II
https://www.acwing.com/problem/content/888/

给定 n 组询问，每组询问给定两个整数 a，b，请你输出 Cbamod(109+7) 的值。

输入格式
第一行包含整数 n。

接下来 n 行，每行包含一组 a 和 b。

输出格式
共 n 行，每行输出一个询问的解。

数据范围
1≤n≤10000,
1≤b≤a≤105
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int mod = 1e9 + 7, N = 100010;

int fact[N], infact[N];

int qmi(int a, int b, int p)
{
    LL res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        a = (LL)a * a % p;
        b >>= 1;
    }
    return res;
}
int main()
{
    fact[0] = infact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (LL)fact[i - 1] * i % mod;
        infact[i] = (LL)infact[i - 1] * qmi(i, mod - 2, mod) % mod;
        // printf("%d %d\n",fact[i],infact[i]);
    }

    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << (((LL)fact[a] * infact[b] % mod) * infact[a - b] % mod) << endl;
    }
    return 0;
}