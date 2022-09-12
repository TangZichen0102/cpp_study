/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e6 + 10;
int n, c, a[N], b[N];
int cnt, cnt0, cnt1, cnt2;
int a0, a1, a2, b0, b1, b2, c0, c1, c2;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            cnt0++;
        if (a[i] == 1)
            cnt1++;
        if (a[i] == 2)
            cnt2++;
    }
    int l = cnt0, r = cnt0 + cnt1;

    for (int i = 0; i < l; i++)
    {
        if (a[i] == 0)
            a0++;
        if (a[i] == 1)
            a1++;
        if (a[i] == 2)
            a2++;
    }
    for (int i = l; i < r; i++)
    {
        if (a[i] == 0)
            b0++;
        if (a[i] == 1)
            b1++;
        if (a[i] == 2)
            b2++;
    }
    for (int i = r; i < n; i++)
    {
        if (a[i] == 0)
            c0++;
        if (a[i] == 1)
            c1++;
        if (a[i] == 2)
            c2++;
    }
    // printf("%d %d %d\n", a0, a1, a2);
    // printf("%d %d %d\n", b0, b1, b2);
    // printf("%d %d %d\n", c0, c1, c2);

    // if (c0 > a2)
    // {
    //     cnt = a2 + 2 * (c0 - a2) + c1 + (a1-(c0 - a2));
    // }
    // else
    // {
    //     cnt = c0 + 2 * (a2 - c0) + a1 + (c1- (a2 - c0));
    // }

    cout << max(c0, a2) + a1 + c1;
    return 0;
}
/*
样例及推导

*/