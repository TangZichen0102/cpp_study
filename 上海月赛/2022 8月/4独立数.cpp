/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0)
#define _for(i, a, b) for (int i = (a); i < (b); ++i)
#define _rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define br puts("")

const int MAXN = 4e6 + 5;

typedef long long LL;
int n, cnt;
int vis[10];
LL ans[MAXN];

void dfs(int len, int cur, LL num)
{
    // printf("len:%d cur:%d num:%d\n", len, cur, num);
    if (cur > len)
    {
        cnt++;
        ans[cnt] = num;
        // cout << cnt << " " << num << endl;
        return;
    }
    int i = 0, end = 9;
    if (cur == 1)
        i = 1;
    if (cur == 1 && len == 9)
    {
        end = 5;
    }

    for (; i <= end; i++)
    {
        if (vis[i])
            continue;
        LL t = num * 10 + i;
        vis[i] = 1;
        dfs(len, cur + 1, t);
        vis[i] = 0;
    }
}

int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> n;

    for (int i = 1; i <= 8; i++)
    {
        dfs(i, 1, 0);
    }

    cout << ans[n];

    return 0;
}
/*
样例及推导

*/