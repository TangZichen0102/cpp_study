#include <bits/stdc++.h>
using namespace std;
bool f[15];
int n;
bool a[6][6] = {false};
int ans = 0;
void res() {
    int q = 0;
    for (int i = 1; i <= 5; i++) {
        if (a[i][1] && a[i][2] && a[i][3] && a[i][4] && a[i][5]) q++;
        if (a[1][i] && a[2][i] && a[3][i] && a[4][i] && a[5][i]) q++;
    }
    if (a[1][1] && a[2][2] && a[3][3] && a[4][4] && a[5][5]) q++;
    if (a[1][5] && a[2][4] && a[3][3] && a[4][2] && a[5][1]) q++;
    f[q] = true;
}
void dfs(int i, int j, int sum) {
    if (i == 6 || sum == n + 1) {
        if (sum == n + 1) res();
        return;
    }
    if (j == 6) dfs(i + 1, 1, sum);
    else {
        a[i][j] = true;
        dfs(i, j + 1, sum + 1);
        a[i][j] = false;
        dfs(i, j + 1, sum);
        a[i][j] = false;
    }
}
int main()
{
    cin >> n;
    dfs(1, 1, 1);
    for (int i = 1; i <= 15; i++)
        if (f[i]) ans += i;
    cout << ans << endl;
    return 0;
}