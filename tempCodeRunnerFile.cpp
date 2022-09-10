#include <bits/stdc++.h>

using namespace std;
unsigned long long a[1005];
unsigned long long qmi(unsigned long long a, unsigned long long b, unsigned long long p)
{
    unsigned long long res = 1 % p;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
}
int main() {
    a[0] = 2, a[1] = 0, a[2] = 1, a[3] = 9;
    unsigned long long n;
    cin >> n;
    for(int i = 4; i < n; i++) a[i] = a[i - 4] + a[i - 3] + a[i - 2] + a[i - 1];
    for(int i = 0; i < n; i++) cout << qmi(a[i], 1, 10);
	return 0;
}