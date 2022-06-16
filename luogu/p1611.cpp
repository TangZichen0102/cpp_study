#include <bits/stdc++.h>
using namespace std;
int ans;
int main()
{
    int a, b;
    cin >> a >> b;
    int n, m;
    for (int i = a; i < b; ++i) {
        n = i;
        int wei = 0;
        while (n) ++wei, n /= 10;
        n = i;
        m = (n % 10) * pow(10, wei - 1) + n / 10;
        while (m != n) {
            if (m > n && m <= b) ++ans;
            m = (m % 10) * pow(10, wei - 1) + m / 10;
        }
    }
    cout << ans;
    return 0;
}