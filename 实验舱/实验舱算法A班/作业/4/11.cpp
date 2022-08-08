#include <bits/stdc++.h>

using namespace std;
struct node {
    int sj, sx;
} a[10001];
int cmp(node x, node y) {
    if (x.sj != y.sj) return x.sj < y.sj;
    return x.sx < y.sx;
}
int n;
double x, t;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].sj;
        a[i].sx = i + 1;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].sx << ' ';
        t += a[i].sj * (n - i - 1);
    }
    x = t / n;
    cout << endl << fixed << setprecision(2) << x;
    return 0;
}