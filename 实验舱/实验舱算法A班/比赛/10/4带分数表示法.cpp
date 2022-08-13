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
int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int getT(int l, int r)
{
    int t = 0;
    for (int i = l; i < r; i++)
        t = t * 10 + a[i];
    return t;
}
void go()
{
    int len = 9;
    for (int i = 1; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            int left = getT(0, i);
            int up = getT(i, j);
            int down = getT(j, len);
            if (up % down != 0)
                continue;
            if (left + up / down == n)
            {
                printf("%d=%d+%d/%d\n", n, left, up, down);
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
    } while (next_permutation(a, a + 9));
    cout << cnt << endl;
    return 0;
}
/*
样例及推导

*/