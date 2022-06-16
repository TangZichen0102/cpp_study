#include <bits/stdc++.h>

using namespace std;
int n, k, ans;
int a[10][10], v[10];
char ch;
void dfs(int row, int cnt) {
    if(cnt > k) {
        ans++;
        return;
    }
    for(int i = row; i <= n; i++)
        for(int j = 1; j <= n; j++) 
            if(a[i][j] == 1 && v[j] == 0) {
                v[j] = 1;
                dfs(i + 1, cnt + 1);
                v[j] = 0;
            }
}
int main() {
    cin >> n >> k;
    while(n != -1 && k != -1) {
        memset(a, 0, sizeof(a));
        memset(v, 0, sizeof(v));
        ans = 0;
        for(int i = 1; i <= n; i++) 
            for(int j = 1; j <= n; j++) {
                cin >> ch;
                if(ch == '#') a[i][j] = 1;
            }
        dfs(1, 1);
        cout << ans << endl;
        cin >> n >> k;
    }
    return 0;
}