#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<int> v(500005,-1);
int main() {
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> n >> m;
    for(int i = 1; i <= n; i++) v[i] = i;
    while(m--) {
        int a;
        cin >> a;
        cout << v[a - 1] << " " << v[a + 1] << endl;
        v.erase(v.begin() + a);
    }
    return 0;
}