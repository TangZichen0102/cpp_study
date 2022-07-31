#include <bits/stdc++.h>

using namespace std;
double ans;
int main() {
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >>a >> b;
        ans = max(ans, sqrt(a * a + b * b));
    }
    printf("%.2lf\n", ans);
    return 0;
}