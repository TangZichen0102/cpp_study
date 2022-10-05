/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int const N = 2e7 + 10;
int n, a;

int primes[N], cnt; // primes[]存储所有素数
bool st[N];         // st[x]存储x是否被筛掉
int euler[N];       // 存储每个数的欧拉函数
int Map[N];

void get_eulers(int n)
{
    euler[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
        {
            primes[cnt++] = i;
            Map[i] = cnt;
            euler[i] = i - 1;
        }
        for (int j = 0; primes[j] <= n / i; j++)
        {
            int t = primes[j] * i;
            st[t] = true;
            if (i % primes[j] == 0)
            {
                euler[t] = euler[i] * primes[j];
                break;
            }
            euler[t] = euler[i] * (primes[j] - 1);
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("1006.in", "r", stdin);
#endif
    get_eulers(N);
    cin >> n;

    while (n--)
    {
        int ans = 0;
        cin >> a;
        for (int i = 2; i < a; i++)
        {
            if (!st[i])
            {
                ans++;
            }
        }
        cout << ans << " " << euler[a] << endl;
    }
    return 0;
}
/*
样例及推导

*/