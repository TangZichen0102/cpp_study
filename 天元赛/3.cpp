#include <bits/stdc++.h>

using namespace std;
int a[1001], b[1001];
int main() {
    int x, y, n, m;
    cin >> x >> y >> n >> m;
    int minn = 100001;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];
    for(int i = min(x, y) - max(n, m); i <= min(x, y) + max(n, m); i++) {
        int sum = 0;
        for(int j = 1; j <= abs(x - i); j++) sum += a[j];
        for(int j = 1; j <= abs(y - i); j++) sum += b[j];
        minn = min(minn, sum);
    }
    cout << minn << endl;
    return 0;
}