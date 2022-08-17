/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int N = 1e5 + 10;
int n, m;
int p[N], cnt[N];

int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("837.in", "r", stdin);
#endif
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        p[i] = i;
        cnt[i] = 1;
    }

    while (m--)
    {
        string op;
        cin >> op;
        int a, b;
        if (op == "C")
        {
            cin >> a >> b;
            a = find(a), b = find(b);
            if (a != b)
            {
                p[a] = b;         //把A插到B下面
                cnt[b] += cnt[a]; //把A的数量加给B
            }
        }
        else if (op == "Q1")
        {
            cin >> a >> b;
            if (find(a) == find(b))
                puts("Yes");
            else
                puts("No");
        }
        else
        {
            cin >> a;
            cout << cnt[find(a)] << endl;
        }
    }

    return 0;
}
/*
样例及推导
输入样例：
5 5
C 1 2
Q1 1 2
Q2 1
C 2 5
Q2 5
输出样例：
Yes
2
3
*/