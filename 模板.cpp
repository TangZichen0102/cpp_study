#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;

int qmi(int a, int b, int p)
{
    int res = 1 % p;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        a = (LL)a * a % p;
        b >>= 1;
    }
    return res % p;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n ;
    return 0;
}