#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[505], b[505];
int num[1010];
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n >> m;
    for(int i = 0; i < n + 1; i++) cin >> a[i];
    for(int i = 0; i < m + 1; i++) cin >> b[i];
    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < m + 1; j++) {
            num[i + j] += a[i] * b[j];
        }
    }
    for(int i = 0; i < n + m + 1; i++) cout << num[i] << " ";
    return 0;
}