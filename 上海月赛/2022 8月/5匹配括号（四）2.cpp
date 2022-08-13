#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 2e5 + 10, mod = 1000000007;
LL ans, sum, top, a[N], len;
string s;
bool k;
int main()
{
    cin >> s;
    a[1] = 1;
    for (LL i = 2; i * 2 <= s.size(); i++)
    {
        a[i] = a[i - 1] * 2 % mod;
    }
    for (LL i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            top++;
            k = true;
        }
        else
        {
            if (k)
            {
                ans = (ans + a[top]) % mod;
                k = false;
            }
            top--;
        }
    }
    printf("%lld", ans);
    return 0;
}