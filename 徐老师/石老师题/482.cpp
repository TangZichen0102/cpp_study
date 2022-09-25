/*
题目来源
http://182.254.140.138:8888/p/482?tid=6326e04ea75d8b057b3cf262
#482. 线性筛素数
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int N = 100000005;
int n, q, primes[N], cnt, x;
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


inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}

inline void write(int x)
{
    char F[200];
    int tmp = x > 0 ? x : -x;
    if (x < 0)
        putchar('-');
    int cnt = 0;
    while (tmp > 0)
    {
        F[cnt++] = tmp % 10 + '0';
        tmp /= 10;
    }
    while (cnt > 0)
        putchar(F[--cnt]);
}


int main()
{
    cin >> n >> q;
    get_primes(n);
    while (q--)
    {
        x = read();
        write(primes[x - 1]);
        puts("");
        // printf("%d\n", primes[x - 1]);
    }
    return 0;
}