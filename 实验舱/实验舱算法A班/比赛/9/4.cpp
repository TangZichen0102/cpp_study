#include <bits/stdc++.h>
using namespace std;
int ans, n, a;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        ans++;
        if(a > ans) ans = a;
    }
    cout << ans;
    return 0;
}