/*
题目来源
#1666、ORXOR
https://oj.shiyancang.cn/Problem/1666.html?index=2&cid=5156&type=4
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0)
#define _for(i, a, b) for (int i = (a); i < (b); ++i)
#define _rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define br puts("")

typedef long long LL;
int n, a[20];

int ans = INT_MAX;
//          前值           总板数      已插板    前板位置
void dfs(int preValue, int totalB, int cntB, int preB)
{
    // printf("preValue:%d totalB:%d cntB:%d preB:%d\n", preValue, totalB, cntB, preB);
    if (cntB == totalB)
    {
        int cur = a[preB];
        for (int i = preB; i <= n; i++)
        {
            cur |= a[i];
        }
        ans = min(ans, preValue ^ cur);

        // cout << "ans:" << (preValue ^ cur) << endl;

        return;
    }
    //    左边界    (最右下标) - (右边要留出几个空间)
    int l = preB, r = (n - 1) - (totalB - cntB);
    // printf("l:%d r:%d\n", l, r);
    int cur = a[l];

    for (int i = l; i <= r; i++)
    {
        cur = cur | a[i];
        dfs(preValue ^ cur, totalB, cntB + 1, i + 1);
    }
}

int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        dfs(0, i, 0, 0);
    }

    cout << ans;
    return 0;
}
/*
样例及推导
3
1 5 7

1 | 5 | 7  = 7
1 ^ 5 ^ 7  = 3
(1|5) ^ 7  = 2
1^ (5 | 7) = 6


*/