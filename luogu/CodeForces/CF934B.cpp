#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    if (k > 36) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 1; i <= k / 2; ++i) cout << 8;
    if (k % 2) cout << 4;
    return 0;
}