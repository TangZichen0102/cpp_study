#include <bits/stdc++.h>

using namespace std;
int n, k, ans, a[100005], cnt;
bool vis[10005];
int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    cnt = k;
    for(int i = 1; i <= n; i++) {
        if(!vis[a[i]]) {
            vis[a[i]] = true;
            cnt--;
        }
        if(!cnt) {
            ans++, cnt = k;
            memset(vis, false, sizeof(vis));
        }
    } 

    cout << ans + 1;
    return 0;
}