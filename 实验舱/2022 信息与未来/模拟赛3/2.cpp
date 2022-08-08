#include <bits/stdc++.h>
using namespace std;
int n, k, idx, a[101][101];
bool vis[101][101];
int main() {
  cin >> n >> k;
  for(int i = 1; i <= k; i++) vis[i][i] = true;
  for (int j = 1; j <= n; j++)
    for (int i = 1; i < n; i++)
      if (!vis[i][j] && !vis[i][j +1])
      {
        vis[i][j] = vis[i][j + 1] = true;
        a[i][j] = a[i][j + 1] = ++idx;
      }
  for (int j = 1; j <= n; j++)
    for (int i = 1; i < n; i++)
      if (!vis[i][j] && !vis[i + 1][j])
      {
        vis[i][j] = vis[i + 1][j] = true;
        a[i][j] = a[i + 1][j] = ++idx;
      }
  
  cout <<idx << endl;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++) cout << a[i][j] << " \n"[j == n];
  return 0;
}
