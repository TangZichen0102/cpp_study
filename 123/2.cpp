#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
int n;
struct node {
    int Class, idx;
    string s;
}a[110];
bool cmp(node x, node y) {
    if(x.Class != y.Class) return x.Class < y.Class;
    return x.idx < y.idx;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i].Class >> a[i].idx >> a[i].s;
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) cout << a[i].Class << " " << a[i].idx << " " << a[i].s << endl;
    return 0;
}