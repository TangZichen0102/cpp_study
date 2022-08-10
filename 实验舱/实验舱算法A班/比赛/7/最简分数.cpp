/*
题目来源

实验舱
#2397 最简分数
求分子分母都不超过 nn 且为真分数的最简分数（分子分母互质的分数为最简分数）有多少个。
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int N = 1e7 + 10;

int primes[N], cnt;
int euler[N];
bool st[N];

void get_eulers(int n)
{
    euler[1] = 1; //约定1的欧拉函数是
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
        {
            primes[cnt++] = i;
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
    int n;
    cin >> n;

    get_eulers(n);

    LL res = 0;
    for (int i = 2; i <= n; i++)
        res += euler[i];

    cout << res << endl;

    return 0;
}

/*
样例及推导

*/