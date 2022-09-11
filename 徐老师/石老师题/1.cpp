
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, m, mx, cnt2;
const int MAXM = 5e6 + 5;
int a[200005], v[MAXM], ans[MAXM], vis[MAXM];

int primes[MAXM], cnt;
bool st[MAXM];

void get_primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (st[i])
            continue;
        primes[cnt++] = i;
        for (int j = i + i; j <= n; j += i)
            st[j] = true;
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
        mx = max(m, a[i]);
    }

    get_primes(mx);

    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 1)
        {
            if (vis[a[i]] == 0)
            {
                if (st[a[i]] == 0)
                {
                    // printf("a[i] is prime %d\n", a[i]);
                    v[a[i]] = 1;
                    vis[a[i]] = 1;
                }
                else
                {
                    for (int j = 0; primes[j] <= a[i]; j++)
                    {
                        if (vis[a[i]] == 0)
                        {
                            int pj = primes[j];
                            if (a[i] % pj == 0)
                            {
                                v[pj] = 1;
                                while (a[i] % pj == 0)
                                {
                                    vis[a[i]] = 1;
                                    a[i] /= pj;
                                }
                            }
                            if (st[a[i]] == 0)
                            {
                                v[a[i]] = 1;
                                vis[a[i]] = 1;
                            }
                        }
                        if (a[i] > 1)
                        {
                            v[a[i]] = 1;
                            vis[a[i]] = 1;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        if (v[primes[i]] == 1)
        {
            // cout << i << endl;
            for (int j = 1; j * primes[i] <= m; j++)
            {
                ans[j * primes[i]] = 1;
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        if (ans[i] == 0)
        {
            cnt2++;
        }
    }

    cout << cnt2 << endl;
    for (int i = 1; i <= m; i++)
    {
        if (ans[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}