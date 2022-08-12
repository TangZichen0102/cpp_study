#include <bits/stdc++.h>

using namespace std;
int n, a[200005];
int maxx = -INT_MAX;
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 1; j <= n - i; j++) {
            int sum = 0;
            for(int k = j; k <= j + i; k++) sum += a[k];
            maxx = max(maxx, sum);
        }
    }
    cout << max(0, maxx);
    return 0;
}