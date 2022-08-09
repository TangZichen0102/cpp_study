#include <bits/stdc++.h>

using namespace std;
long long l, r;
int main() {
    cin >> l >> r;
    cout << 1 << " " << r << " " << min(l, r) << " " << r * (r - 1);
    return 0;
}