/*
题目来源
#110. 乘法逆元
https://loj.ac/p/110
https://oi-wiki.org/math/number-theory/inverse/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, p;
const int N = 1e6 + 5;
int inv[N];

int main()
{
    cin >> n >> p;

    inv[1] = 1;
    puts("1");
    for (int i = 2; i <= n; ++i)
    {
        inv[i] = (long long)(p - p / i) * inv[p % i] % p;
        printf("%d\n", inv[i]);
    }
    return 0;
}
/*
样例及推导

*/