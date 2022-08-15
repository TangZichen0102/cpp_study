/*
题目来源
2960奶牛的谎言
https://oj.shiyancang.cn/Contest/Problem/2960.html?index=0&cid=5170&type=0

acwing
https://www.acwing.com/video/3874/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 100005;
LL n, l[N], g[N];

struct node
{
    char x;
    LL y;
    bool operator<(node xx)
    {
        return y < xx.y;
    }
} a[N];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }

    sort(a + 1, a + n + 1);

    for (int i = 1; i <= n; i++)
    {
        l[i] = l[i - 1];
        if (a[i].x == 'L')
            l[i]++;
    }

    LL ans = n; //最多有N头牛说谎;

    for (int i = n, r = 0; i; i--)
    {
        int j = i, t = 0;
        while (j && a[j].y == a[i].y)
        {
            if (a[j].x == 'G')
                t++;
            j--;
        }
        ans = min(ans, l[j] + r);
        r += t;
        i = j + 1;
    }
    cout << ans;

    return 0;
}
/*
样例及推导

*/