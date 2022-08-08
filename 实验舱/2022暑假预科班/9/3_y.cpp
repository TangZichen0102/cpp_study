#include <bits/stdc++.h>
using namespace std;
struct node
{
    int pre, nxt;
} a[555555];
int n, m, num;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        a[i] = {i - 1, i + 1};
    }
    a[1].pre = a[n].nxt = -1;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num);
        printf("%d %d\n", a[num].pre, a[num].nxt);
        a[a[num].pre].nxt = a[num].nxt, a[a[num].nxt].pre = a[num].pre;
        if (a[num].pre == -1)
        {
            a[num].pre = a[num].nxt;s
        }
        if (a[num].nxt == -1)
        {
            a[num].nxt = a[num].pre;
        }
    }
    return 0;
}