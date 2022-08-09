/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
#ifndef ONLINE_JUDGE
    // freopen(".in", "r", stdin);
#endif
    cout << gcd(40, 16);
    return 0;
}
/*
样例及推导

*/