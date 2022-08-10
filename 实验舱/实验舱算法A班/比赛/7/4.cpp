#include <bits/stdc++.h>

using namespace std;
int n, maxx, cnt;
const int maxn = 5e6 + 10;
bool c[maxn];
int a[maxn], b[maxn];
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i], b[a[i]]++, maxx = max(maxx, a[i]);
    for(int i = maxx; i; i--) {
        cnt = 0;
        for(int j = 1; i * j <= maxx; j++) {
            if(c[i * j]) {
                return printf("%d", i), 0;
            }
            cnt += b[i * j];
        }
        if(cnt > 1) c[i] = 1;
    }
    cout << 0;
    return 0;
}