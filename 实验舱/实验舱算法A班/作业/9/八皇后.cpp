#include <bits/stdc++.h>

using namespace std;
int a[10], v[10], v1[20], v2[20], ans[100];
int n, p, cnt;
void dfs(int row) {
    if(row > 8) {
        cnt++;
        for(int i = 1; i <= 8; i++) ans[cnt] = ans[cnt] * 10 + a[i];
        return;
    }
    for(int i = 1; i <= 8; i++) {
        if(!a[row] && !v[i] && !v1[row + i] && !v2[row - i + 8]) {
            a[row] = i;
            v[i] = v1[row + i] = v2[row - i + 8] = 1;
            dfs(row + 1);
            a[row] = 0;
            v[i] = v1[row + i] = v2[row - i + 8] = 0;
        }
    }
}
int main() {
    dfs(1);
    cin >> p;
    cout << ans[p];
    return 0;
}