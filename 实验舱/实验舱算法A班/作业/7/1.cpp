#include <bits/stdc++.h>

using namespace std;
int n;
int a[205], b[205];
int cal(int x) {
    if(x > n) return 0;
    return min(cal(x + a[x]), cal(x + b[x])) + 1;
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    cout << cal(1);
    return 0;
}