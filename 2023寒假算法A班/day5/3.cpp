#include <bits/stdc++.h>

using namespace std;
long long n, s, ans, total;
struct node {
    long long a, b, t;
}aa[100005];
bool cmp(node x, node y) {
    return y.t * x.b > x.t * y.b;
}
int main() {
    cin >> n >> s;
    for(long long i = 1; i <= n; i++) cin >> aa[i].a >> aa[i].b >> aa[i].t;
    sort(aa + 1, aa + n + 1, cmp);
    for(long long i = 1; i <= n; i++) {
        total += aa[i].t;
        ans += aa[i].a - total * aa[i].b;
    }
    cout << ans;
    return 0;
}