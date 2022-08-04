#include <bits/stdc++.h>

using namespace std;
long long n, m;
int x, y;
bool mp[100005][100005];
int main() {
    cin >> n >> m;
    long long ans = n * n;
    for(long long i = 1; i <= m; i++) {
        cin >> x >> y;
        long long sum = 0;
        if(!mp[x][y]) {
            mp[x][y] = true;
            sum++;
        }
        for(long long j = 1; j <= n; j++) {
            if(!mp[j][y]) sum++, mp[j][y] = !mp[j][y];
            if(!mp[x][j]) sum++, mp[x][j] = !mp[x][j];
        }
        cout << ans - sum << endl;
        ans -= sum;
    }
    return 0;
}