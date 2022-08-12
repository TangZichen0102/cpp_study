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
int n, cnt;
int vis[10];
int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> n;
    int i = 1;
    while (true)
    {
        int flag = 0;
        int t = i;
        while (t)
        {
            if (vis[t % 10] == 1)
            {
                flag = 1;
                cout << i << endl;
                break;
            }
            vis[t % 10] = 1;
            t /= 10;
        }
        if (flag == 0)
            cnt++;
        if (cnt == n)
        {
            cout << i;
            break;
        }
        i++;
        memset(vis, 0, sizeof(vis));
    }

    return 0;
}
/*
样例及推导

*/