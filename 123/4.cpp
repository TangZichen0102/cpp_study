#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> n)
    {
        double a, c;
        int b, d;
        a = n * log10(n);
        b = (int)a;
        c = a - b;
        d = int(pow(10, c));
        cout << d << endl;
    }
    return 0;
}
