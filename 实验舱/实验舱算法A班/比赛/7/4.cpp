#include <bits/stdc++.h>

using namespace std;
int a[1000005];
bool cmp(int a, int b) {
    return a > b;
}
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
int main() {
    int n;                     
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, cmp);
    if(gcd(a[0], a[1]) == 1) cout << 0;
    else {
        for(int i = gcd(a[0], a[1]) - 1; i >= 1; i--) {
            if(a[0] % i == 0 && a[1] % i == 0) {
                cout << i;
                return 0;
            }
        }
    }
    return 0;
}