#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
const int maxm = 105;
int n, m, ans;
int a[maxn][maxm], sum[maxn][maxm];

int main()
{
    int size;
    cin >> n >> m;
    size = min(n, m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + a[i][j];
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int l = 1; l <= size; l++) {
                int rx = i + l - 1;
                int ry = j + l - 1;
                if (rx > n || ry > m || sum[rx][ry] - sum[rx][j - 1] - sum[i - 1][ry] + sum[i - 1][j - 1] != l * l) break;
                if (ans < l) ans = l;
            }
    cout << ans << endl;
    return 0;
}