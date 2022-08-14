#include <bits/stdc++.h>

using namespace std;
struct node {
    int x, y;
}a[200010];
int n, ans;
int vis[200010];
bool cmp(node x, node y) {
    if (x.x == y.x) return x.y < y.y;
    return x.x < y.x; 
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i].x >> a[i].y;
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (vis[a[i].y]) vis[a[i].y]--; 
        else ans++;
        vis[a[i].y - 1]++;
    }
    cout << ans;
    return 0;
}