#include <bits/stdc++.h>

using namespace std;
long long a[55], b[55];
int x, y, z;

int main() {
    cin >> x >> y >> z;
    for(int i = 1; i <= x; i++) {
        a[i] = 1;
        b[i] = 0;
    }
    for(int i = x + 1; i <= z + 1; i++) {
        b[i] = a[i - x] * y;
        a[i] = a[i - 1] + b[i - 2];
    }
    cout << a[z - 1];
    return 0;
}