#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) {
    return ((b == 0) ? a : gcd(b, a % b));
}
struct mt{
    int a, b;
    bool operator <(mt y) {
        return a * y.b < b * y.a;
    }
    bool issimplized() {
        return gcd(a, b) == 1;
    }
    mt() {

    }
    mt(int _a, int _b) {
        a = _a;
        b = _b;
    }
} q[100005];
int r, n;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            if(mt(j, i).issimplized()) q[++r].a = j, q[r].b = i;
    sort(q + 1, q + r + 1);
    cout << "0/1" << " ";
    for(int i = 1; i <= r; i++) cout << q[i].a << '/' << q[i].b << " ";
    return 0;
}