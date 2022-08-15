/*
题目来源
887. 求组合数 III
https://www.acwing.com/problem/content/889/

给定 n 组询问，每组询问给定三个整数 a,b,p，其中 p 是质数，请你输出 Cbamodp 的值。

输入格式
第一行包含整数 n。

接下来 n 行，每行包含一组 a,b,p。

输出格式
共 n 行，每行输出一个询问的解。

数据范围
1≤n≤20,
1≤b≤a≤1018,
1≤p≤105,

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, p;

int qmi(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = (LL)res * a % p;
        a = (LL)a * a % p;
        b >>= 1;
    }
    return res;
}
//求组合数 C a b
int C(int a, int b)
{
    int res = 1;
    for (int i = 1, j = a; i <= b; i++, j--)
    {
        res = (LL)res * j % p;
        res = (LL)res * qmi(i, p - 2) % p;
    }
    return res;
}

int lucas(LL a, LL b)
{
    if (a < p && b < p)
        return C(a, b);
    return (LL)C(a % p, b % p) * lucas(a / p, b / p) % p;
}

int main()
{
#ifndef ONLINE_JUDGE
    // freopen(".in", "r", stdin);
#endif
    cin >> n;
    while (n--)
    {
        LL a, b;
        cin >> a >> b >> p;
        cout << lucas(a, b) << endl;
    }
    return 0;
}
/*
样例及推导
输入样例：
3
5 3 7
3 1 5
6 4 13
输出样例：
3
3
2
*/