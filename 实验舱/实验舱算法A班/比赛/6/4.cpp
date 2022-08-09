#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
LL n;
struct node {
    int t, dll;
}a[100005];
int dll = INT_MAX;
int cmp(node a, node b) {
    if(a.dll != b.dll) return a.dll < b.dll;
    else return a.t < b.t;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i].t >> a[i].dll;
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) {
        dll = min(dll, a[i].dll - a[i].t);
        // cout << a[i].dll - a[i].t << " ";
    }
    cout << max(dll, -1);
    return 0;
}