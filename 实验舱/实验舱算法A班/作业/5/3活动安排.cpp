#include <bits/stdc++.h>

using namespace std;
struct node {
    int s, e;
    bool operator<(const node a) const {
        return e < a.e;
    }
}a[1005];
int n, ans = 1, pre;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i].s >> a[i].e;
    sort(a, a + n);
    pre = a[0].e;
    for(int i = 0; i < n; i++)
        if(a[i].s >= pre) ans++, pre = a[i].e;
    cout << ans;
    return 0;
}