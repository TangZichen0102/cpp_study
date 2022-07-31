#include <bits/stdc++.h>

using namespace std;
int a1, b1, a2, b2, k;
int main() {
    scanf("%d/%d %d/%d %d", &a1, &b1, &a2, &b2, &k);
    double l = a1 * 1.0 / b1, r = a2 * 1.0 / b2;
    int flag = 0;
    if(l > r) swap(l, r);
    for(int i = 1; i <= k; i++) {
        double temp = i * 1.0 / k;
        if(temp - l >= 1e-8 && 1e-8 <= r - temp && __gcd(i, k) == 1) {
            if(flag) cout << " ";
            cout << i << "/" << k;
            flag = 1;
        }
    }
    return 0;
}