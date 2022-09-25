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
#include<bits/stdc++.h>
#define inf 0x7fffffff
using namespace std;
inline int read()
{
    int x=0;char ch=getchar();
    while(ch<'0'||ch>'9')ch=getchar();
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x;
}
int n,mx;
int a[100005],cnt[1000005],s[1000005];
int main()
{
    n=read();
    for(int i=1;i<=n;i++)
    {
        a[i]=read();
        cnt[a[i]]++;//类似桶 统计相同数字出现的次数
        mx=max(a[i],mx);//找出最大的a[i].
    }
    for(int i=1;i<=mx;i++)
        if(cnt[i])//若cnt[i]不为0 ，证明有i的存在
        for(int j=i;j<=mx;j+=i)//注意是j=j+i；
            s[j]+=cnt[i];//统计符合要求的个数
    for(int i=1;i<=n;i++)
        printf("%d\n",s[a[i]]-1); //输出结果
    return 0;
}
*/