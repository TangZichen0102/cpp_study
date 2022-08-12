
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
const int MAXN = 2e5 + 10;
int n, a[MAXN], ans;

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

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum < 0)
            sum = 0;
        else
            ans = max(sum, ans);
        // printf("i:%d a[i]:%d sum:%d,ans:%d\n", i, a[i], sum, ans);
    }
    cout << ans;
    return 0;
}