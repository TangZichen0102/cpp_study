#include <bits/stdc++.h>

using namespace std;
int dfs(int n, int k, int flag) {
    if(n == 1) return flag;
    int half = pow(2, n - 2);
    if(k > half) flag = !flag;
    return dfs(n - 1, (k - 1) % half + 1, flag); 
}
int t, n, k;
int main() {
#ifndef ONLIEN_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> k;
        cout << dfs(n, k, 0) << endl;
    }
    return 0;
}