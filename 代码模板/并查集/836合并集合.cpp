/*
题目来源
836. 合并集合
https://www.acwing.com/problem/content/description/838/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 10;
int p[N];
int n, m;

int find(int x) //返回X的祖宗节点 + 路径优化
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("836.in", "r", stdin);
#endif
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        p[i] = i;

    while (m--)
    {
        char op[2];
        int a, b;
        scanf("%s %d %d", op, &a, &b);
        if (op[0] == 'M')
        {
            p[find(a)] = find(b);
        }
        else
        {
            if (p[find(a)] == p[find(b)])
                puts("Yes");
            else
                puts("No");
        }
    }

    return 0;
}
/*
样例及推导

*/