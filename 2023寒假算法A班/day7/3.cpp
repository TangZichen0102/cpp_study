#include <bits/stdc++.h>

using namespace std;
long long n, sum;
long long x[2005], y[2005];
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> x[i];
    for(int i = 1; i <= n; i++) cin >> y[i];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            for(int k = 1; k <= n; k++) {
                if(i != j && j != k && i != k) {
                    int x1 = x[i] - x[j], y1 = y[i] * y[j];
                    int s1 = sqrt(x1 * x1 + y1 * y1);
                    int x2 = x[j] - x[k], y2 = y[j] - y[k];
                    int s2 = sqrt(x2 * x2 + y2 * y2);
                    if(s1 == s2) sum++;
                }
            }
    cout << sum;
    return 0;
}