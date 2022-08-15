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
int n;

struct node
{
    char x;
    int y;
    bool operator<(node xx)
    {
        return y < xx.y;
    }
} a[1005];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }

    sort(a, a + n);

    int ans = n; //最多有N头牛说谎;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (i > 0)
            for (int j = 0; j < i; j++)
            {
                if (a[j].y < a[i].y && a[j].x == 'L')
                    cnt++;
            }
        if (i < n - 1)
            for (int j = i + 1; j < n; j++)
            {
                if (a[j].y > a[i].y && a[j].x == 'G')
                    cnt++;
            }
        ans = min(cnt, ans);
    }
    cout << ans;

    return 0;
}
/*
样例及推导

*/