#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, t;
int a[6][N], ans[N];

bool cmp(int x, int y)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += (a[i][x] < a[i][y]);
    return cnt >= 3;
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &t);
            a[i][t] = j;
            ans[j] = j;
        }
    sort(ans + 1, ans + n + 1, cmp);
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    return 0;
}