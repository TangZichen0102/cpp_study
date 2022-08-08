#include <bits/stdc++.h>

using namespace std;
int n, r, q;
struct node {
    int p, s, r;
} a[200011], t1[100011], t2[100011];

bool cmp(node a, node b) {
    if (a.s == b.s) return a.r < b.r;
    return a.s > b.s;
}

void merge() {
    for (int i = 1, j = 1, cnt = 0; cnt < n;)
        if (cmp(t1[i], t2[j])) a[++cnt] = t1[i++];
        else a[++cnt] = t2[j++];
}

int main() {
    int k1, k2;
    cin >> n >> r >> q, n *= 2;
    for (int i = 1; i <= n; i++) cin >> a[i].s;
    for (int i = 1; i <= n; i++) cin >> a[i].p, a[i].r = i;
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= r; i++) {
        k1 = k2 = 0;
        for (int j = 1; j <= n; j += 2)
            if (a[j].p > a[j + 1].p) a[j].s++, t1[++k1] = a[j], t2[++k2] = a[j + 1];
            else a[j + 1].s++, t1[++k1] = a[j + 1], t2[++k2] = a[j];
        t1[k1 + 1].s = t2[k2 + 1].s = -1;
        merge();
    }
    cout << a[q].r;
    return 0;
}