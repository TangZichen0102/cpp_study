#include <bits/stdc++.h>

using namespace std;
int x[100005];
int n;
int ans;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        x[a]++;
    }
    for(int i = 0; i < n; i++) ans = max(ans, x[i]);
    cout << ans + 1;
    return 0;
}