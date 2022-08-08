#include <bits/stdc++.h>

using namespace std;
int n, l1, l2, r1, r2;
int a[10005];
int main() {
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a + l1 - 1, a + r1);
    sort(a + l2 - 1, a + r2, greater<int> ());
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}