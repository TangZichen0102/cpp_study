#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, h;
    bool operator<(const node t) const
    {
        if (x != t.x)
            return x <= t.x;
        return h < t.h;
    }
} a[200010];
int n, ans = 0;
int vis[200010];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &a[i].x, &a[i].h);
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (vis[a[i].h] > 0)
            vis[a[i].h - 1]++, vis[a[i].h]--;
        else
            ans++, vis[a[i].h - 1]++;
    }
    printf("%d", ans);
    return 0;
}