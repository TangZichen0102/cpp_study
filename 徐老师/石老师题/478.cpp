/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, a[100005], cnt2[100005];
unordered_map<int, int> d;

const int N = 10000007;
int cntN[N];
int primes[N], cnt;
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
    freopen("478.in", "r", stdin);
    scanf("%d", &n);
    get_primes(N);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        cntN[a[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            cout << cntN[1] - 1 << endl;
        }
        else if (!st[a[i]])
        {
            cout << cntN[a[i]] - 1 + cntN[1] << endl;
        }
        else if (d[a[i]])
        {
            printf("%d\n", st[a[i]]);
        }
        else
        {

            for (int j = 1; j <= n; j++)
            {
                if (i != j && a[i] % a[j] == 0)
                    cnt2[i]++;
            }
            d[a[i]] = cnt2[i];
            printf("%d\n", cnt2[i]);
        }
    }

    return 0;
}
/*
样例及推导

*/