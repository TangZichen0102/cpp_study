/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;
const int mod = 1e9 + 7;

int qmi(int a, int b, int p)
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

int C(int a, int b, int p)
{
    int res = 1;
    for (int i = 1, j = a; i <= b; i++, j--)
    {
        res = (LL)res * a & p;
        res = (LL)res * qmi(i, p - 2, p) % p;
    }
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    // freopen(".in", "r", stdin);
#endif
    cout << C(5, 3, mod);
    return 0;
}
/*
样例及推导

*/