#include <bits/stdc++.h>
using namespace std;
struct node {
    long long xi, s, w;
} a[1000001], x[1000001], y[1000001];
long long n, r, q;
bool cmp(node x, node y) {
    if (x.s != y.s) return x.s > y.s;
    else return x.xi < y.xi;
}
int main() {
    cin >> n >> r >> q;
    for (int i = 1; i <= 2 * n; i++) cin >> a[i].s;
    for (int i = 1; i <= 2 * n; i++) {
        a[i].xi = i;
        cin >> a[i].w;
    }
    sort(a + 1, a + 2 * n, cmp);
    for (int i = 1; i <= r; i++) {
        int xl = 0, yl = 0;
        for (int j = 1; j <= 2 * n - 1; j += 2) {
            if (a[j].w > a[j + 1].w) {
                a[j].s++;
                x[++xl] = a[j];
                y[++yl] = a[j + 1];
            }
            else if (a[j].w < a[j + 1].w) {
                a[j + 1].s++;
                x[++xl] = a[j + 1];
                y[++yl] = a[j];
            }
        }
        merge(x + 1, x + n + 1, y + 1, y + n + 1, a + 1, cmp);
    }
    cout << a[q].xi;
    return 0;
}