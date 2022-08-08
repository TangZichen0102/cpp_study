#include <bits/stdc++.h>
using namespace std;
bool g[5005][5005];
int d[5005], ans = INT_MAX, n, m, u[5005], v[5005];
int main()
{
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= m; i++)
  {
    scanf("%d%d", u + i, v + i);
    g[u[i]][v[i]] = g[v[i]][u[i]] = true;
  }
  for (int u = 1; u <= n; u++)
    for (int v = 1; v <= n; v++)
      d[u] += g[u][v];
  for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
      if (g[u[i]][j] && g[v[i]][j])
        ans = min(ans, d[u[i]] + d[v[i]] + d[j]);
  printf("%d", ans == INT_MAX ? -1 : ans);
  return 0;
}