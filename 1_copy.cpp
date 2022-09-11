
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, m, c, mx, cnt;
const int MAXM = 5e6 + 5;
int a[200005], v[MAXM], ans[MAXM], vis[MAXM];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        a[c]++;
        mx = max(m, c);
    }

    for (int i = 2; i <= m; i++)
    {
        for (int j = i; j <= mx; j += i)
        {
            if (a[j])
            {
                v[i] = 1;
                break;
            }
        }
    }

    cnt = m;

    for (int i = 2; i <= m; i++)
    {
        if (v[i] && vis[i] == 0)
        {
            for (int j = i; j <= m; j += i)
            {
                if (vis[j] == 0)
                {
                    ans[j] = 1, cnt--;
                }
            }
        }
    }

    cout << cnt << endl;
    for (int i = 1; i <= m; i++)
    {
        if (ans[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}