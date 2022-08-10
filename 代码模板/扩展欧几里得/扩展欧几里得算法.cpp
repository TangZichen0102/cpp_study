/*
扩展欧几里得算法
https://www.acwing.com/problem/content/879/

给定 n 对正整数 ai,bi，对于每对数，求出一组 xi,yi，使其满足 ai×xi+bi×yi=gcd(ai,bi)。
*/

#include <bits/stdc++.h>
using namespace std;

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
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, x, y;
        cin >> a >> b;
        exgcd(a, b, x, y);
        printf("%d %d\n", x, y);
    }

    return 0;
}