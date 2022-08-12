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

void dfs(int a)
{
    if (a == 1)
        return;
    if (a % 2)
    {
        a = a * 3 + 1;
    }
    else
    {
        a /= 2;
    }
    cout << a << " ";
    dfs(a);
}

int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;

    dfs(n);

    return 0;
}
/*
样例及推导

*/