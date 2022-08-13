/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0)
#define _for(i, a, b) for (int i = (a); i < (b); ++i)
#define _rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define br puts("")

typedef long long LL;
int n, cnt;
int s[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int getT(int l, int r)
{
    int t = 0;
    for (int i = l; i < r; i++)
        t = t * 10 + s[i];
    return t;
}
void go()
{
    int len = 9;
    for (int i = 1; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            int a = getT(0, i);
            int b = getT(i, j);
            int c = getT(j, len);
            if (b % c != 0)
                continue;
            if (a + b / c == n)
            {
                printf("%d=%d+%d/%d\n", n, a, b, c);
                cnt++;
            }
        }
    }
}
int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> n;
    do
    {
        go();
    } while (next_permutation(s, s + 9));
    cout << cnt << endl;
    return 0;
}
/*
样例及推导

*/