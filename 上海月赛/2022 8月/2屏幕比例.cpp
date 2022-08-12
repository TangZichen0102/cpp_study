/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0)
#define _for(i, a, b) for (int i = (a); i < (b); ++i)
#define _rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define br puts("")

typedef long long LL;
int n;
int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    int x, y;
    scanf("%d*%d", &x, &y);

    // cout << x << y;

    int g = __gcd(x, y);
    cout << x / g << ":" << y / g;

    return 0;
}
/*
样例及推导

*/