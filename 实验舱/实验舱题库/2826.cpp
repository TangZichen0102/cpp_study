/*
题目来源
https://oj.shiyancang.cn/Problem/2826.html
#2826、修剪草地
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, t, ans = 9999999, cnt = 0, vis[2010][2010];
map<char, vector<int>>
    d = {{'E', {0, 1}},   // 东
         {'W', {0, -1}},  //西
         {'S', {1, 0}},   //南
         {'N', {-1, 0}}}; // 北
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("2826.in", "r", stdin);
#endif
    cin >> n;
    int x = 1000, y = 1000;
    while (n--)
    {
        t++;
        char D;
        int s;
        cin >> D >> s;
        for (int i = 1; i <= s; i++)
        {
            x += d[D][0], y += d[D][1];
            if (vis[x][y] != 0)
            {
                cnt++;
                ans = min(t - vis[x][y], ans);
                // cout << endl;
            }
            vis[x][y] = t;
        }
    }
    cout << (cnt ? ans : -1);
    return 0;
}