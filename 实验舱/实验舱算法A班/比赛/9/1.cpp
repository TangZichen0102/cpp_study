#include <bits/stdc++.h>

using namespace std;
int n, m, x, a[15][15], c[15],  sum[15];
bool vis[15];
int minn = INT_MAX;
void dfs(int deef)
{
    if (deef == n + 1) {
        memset(sum, 0, sizeof(sum)); 
        for (int i = 1; i <= n; ++i)
            if (vis[i] == true)
                for (int j = 1; j <= m; ++j) {
                    sum[j] += a[i][j];
                    // cout << a[i][j] << " ";
                }
        for (int i = 1; i <= m; ++i)
            if (sum[i] < x) return;
        int sum2 = 0;
        for (int i = 1; i <= n; ++i)
            if (vis[i] == true) sum2 += c[i];
        minn = min(minn, sum2);
    }
    else {
        vis[deef] = false;
        dfs(deef + 1);
        vis[deef] = true;
        dfs(deef + 1);
    }
}
int ans[10005];
int main()
{
    cin >> n >> m >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
        for (int j = 1; j <= m; j++)
            cin >> a[i][j], ans[j] += a[i][j];
    }
    for(int i = 1; i <= m; i++) {
        if(ans[i] < x) {
            cout << -1;
            return 0;
        }
    }
    dfs(1);
    cout << max(minn, -1);
    return 0;
}