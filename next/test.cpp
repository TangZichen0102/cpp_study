#include<bits/stdc++.h>

using namespace std;
int n, k, tot, pr[1000010];
int main() {
    cin >> n >> k;
    for(int i = 1; i < n; ++i) {
        if(__gcd(i, n) == 1) pr[++tot] = i;
    }
    cout << (k - 1) / tot * n + pr[k % tot];
    return 0;
}