/*
题目来源
878. 线性同余方程
https://www.acwing.com/problem/content/880/
给定 n 组数据 ai,bi,mi，对于每组数求出一个 xi，使其满足 ai×xi≡bi(modmi)，如果无解则输出 impossible。
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;

int exgcd(int a, int b, int &x, int &y)
{
    if (!b)
    {
        x = 1, y = 0;
        return a;
    }
    int d = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}
int main()
{
#ifndef ONLINE_JUDGE
    // freopen(".in", "r", stdin);
#endif
    cin >> n;
    while (n--)
    {
        int a, b, m, x, y;
        cin >> a >> b >> m;
        int d = exgcd(a, m, x, y);
        if (b % d)
            puts("impossible");
        else
            printf("%d\n", (LL)x * (b / d) % m);
    }
    return 0;
}
/*
样例及推导
a × x≡b(mod m)
可以转化成 a*x = m*y + b;
a*x - m* y = b;
也就是 a*x + m * (-y) = b;
根据扩展欧几里得原理,要成立, b就要是 gcd(a,m)的倍数
d = gcd(a,m) 
a*x*(b/d) +  m * (-y)*(b/d) = b *(b/d);

*/