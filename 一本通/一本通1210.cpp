#include <bits/stdc++.h>

using namespace std;
void fact(int n, int a) {
    int b = 0;
    if (n == 0 || a > n) return;
    while (n % a == 0) {
        b++;
        n /= a;
    }
    if (b >= 1) {
        if (b == 1) cout << a;
        else cout << a << '^' << b;
        if (n > a) cout << "*";
    }
    fact(n, a + 1);
}
int main() {
    int n;
    cin >> n;
    fact(n, 2);
    return 0;
}