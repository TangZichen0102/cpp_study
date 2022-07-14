#include <bits/stdc++.h>

using namespace std;

void h(int n, char a, char b, char c) {
    if (n == 0) return;
    else {
        h(n - 1, a, c, b);
        cout << n << " " << a << " " << c << endl;
        h(n - 1, b, a, c);
    }
}

int main() {
    int n;
    cin >> n;
    h(n, 'A', 'B', 'C');
    return 0;
}
