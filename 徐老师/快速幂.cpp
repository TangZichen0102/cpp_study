#include <bits/stdc++.h>

using namespace std;
int n;
long long qmi(int a, int k, int m) {
    long long res = a;
    while(k) {
        if(k & 1) res = a * res % m;
        a = (long long) a * a % m;
        k >>= 1;
    }
    return res;
}
int main() {
    cin >> n;
    while(n--) {
        int a, k, m;
        cin >> a >> k >> m;
        cout << qmi(a, k, m);
    }
    return 0;
}