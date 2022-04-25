#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b[9] = {14, 1, 2, 4, 7, 8, 11, 13, 14}, c;
    cin >> a;
    c = ((a - 1) / 8) * 15 + b[a % 8];
    cout << c << endl;
    return 0;
}
