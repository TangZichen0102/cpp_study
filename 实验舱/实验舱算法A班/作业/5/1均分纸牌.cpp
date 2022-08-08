#include <bits/stdc++.h>

using namespace std;
int n, ans, a[101], ave;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i], ave += a[i];
    ave /= n;
    for(int i = 0; i < n; i++) {
        ans += (a[i] != ave);
        a[i + 1] -= ave - a[i];
    }
    cout << ans;
    return 0;
}
