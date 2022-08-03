#include <bits/stdc++.h>

using namespace std;
int n;
int a[105], b[105], c[105];
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    for(int i = 1; i <= n; i++) c[i] = b[a[i]];
    for(int i = 1; i <= n; i++) b[i] = c[a[i]];
    for(int i = 1; i <= n; i++) c[i] = b[a[i]];
    for(int i = 1; i <= n; i++) cout << c[i] << endl;
    return 0;
}