#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a == b) {
        cout << 1 << " " << a << " " << a << " " << a;
        return 0;
    }
    cout << 1 <<  " " << b << " " << a << " " << b * (b - 1);
    return 0;
}