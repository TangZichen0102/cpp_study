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
const int mod = 1e9 + 7;
int n;

int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen(".in", "r", stdin);
#endif

    string s;
    cin >> s;

    cnt = 1, times = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ')')
            times++;
    }

    return 0;
}
/*
样例及推导

*/