#include <bits/stdc++.h>

using namespace std;
int n, a[22], T, num = 0, b[22];
void print(int y) {
    for (int i = y; i >= 0; i--) cout << b[i] << " ";
    cout << endl;
}
void f(int x, int y, int sum) {
    if (x < 0) return;
    f(x - 1, y, sum);
    b[y] = a[x];
    sum += a[x];
    if (sum == T) {
        num++;
        print(y);
    }
    f(x - 1, y + 1, sum);
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> T;
    f(n - 1, 0, 0);
    cout << num;
    return 0;
}
