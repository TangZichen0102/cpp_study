#include <bits/stdc++.h>

using namespace std;
int x, y;
int sum;
int lcm(int a, int b) {
    return a * b / __gcd(a, b);
}
int main() {
    cin >> x >> y;
    for(int i = x, j = y; i <= y; i++, j--) {
        if(__gcd(i, j) == x && lcm(i, j) == y) sum++;
        cout << __gcd(i, j) << " " << lcm(i, j) << endl;
    }
    cout << sum;
    return 0;
}