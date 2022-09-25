/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 100000005;
int n, primes[N], cnt;
bool st[N];

void get_primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            primes[cnt++] = i;
        for (int j = 0; primes[j] <= n / i; j++)
        {
            st[primes[j] * i] = true;
            if (i % primes[j] == 0)
                break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    get_primes(sqrt(n));
    for (int i = 0; i < cnt; i++)
    {
        if (n % primes[i] == 0)
        {
            cout << n / primes[i] << endl;

            return 0;
        }
    }
    return 0;
}
/*
样例及推导

*/