/*
题目来源
https://oj.shiyancang.cn/Contest/Problem/2504.html?index=1&cid=5182&type=4
#B、滑动解锁
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int n, ans = 0;
bool vis[10];
int e[10][2], t[10];
const int dig[][3] = {{1, 3, 2}, {1, 9, 5}, {1, 7, 4}, {2, 8, 5}, {3, 7, 5}, {3, 9, 6}, {4, 6, 5}, {7, 9, 8}}; //不可行的组合
bool isok(int a, int b)
{ //判断是否可行
    for (int i = 0; i < 8; i++)
    {
        if ((dig[i][0] == a && dig[i][1] == b) || (dig[i][0] == b && dig[i][1] == a))
        {
            if (!vis[dig[i][2]])
                return false;
        }
    }
    return true;
}
void dfs(int num, int st)
{ // num表示一共选了几个数字，st目前是第几个
    if (st >= 2)
    { // t[]存放选中的顺序，判断最新选中的两个是否符合规定
        if (!isok(t[st - 1], t[st - 2]))
            return;
    }
    if (st > num)
        return;
    if (num == st)
    { //选取了足够的数，判断是否所有的线段都存在
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < st - 1; j++)
            {
                if ((e[i][0] == t[j] && e[i][1] == t[j + 1]) || (e[i][1] == t[j] && e[i][0] == t[j + 1]))
                    break;
                if (j == st - 2)
                    return;
            }
        }
        ans++;
        return;
    }
    for (int i = 1; i < 10; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            t[st] = i;
            dfs(num, st + 1);
            vis[i] = false;
        }
    }
    return;
}

void func()
{
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> e[i][0] >> e[i][1];
    }
    for (int i = n > 4 ? n : 4; i < 10; i++)
        dfs(i, 0); //枚举选中的数字，最少4个
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    int c;
    for (cin >> c; c--;)
    {
        cin >> n;
        if (n == 0)
        {
            cout << 389112 << endl;
        }
        else
        {
            func();
        }
    }
    return 0;
}
/*
样例及推导

*/