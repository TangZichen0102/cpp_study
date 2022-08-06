/*
浴谷 
P1090 [NOIP2004 提高组] 合并果子 / [USACO06NOV] Fence Repair G 
https://www.luogu.com.cn/problem/P1090

实验仓
#908、合并果子
https://oj.shiyancang.cn/Problem/908.html
*/

#include <bits/stdc++.h>
using namespace std;

int n, t, ans;

vector<int> a;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    sort(a.begin(), a.end());

    while (--n)
    {
        int w = a[0] + a[1]; //累加前2个元素
        ans += w;
        a.erase(a.begin(), a.begin() + 2); //删除前2个元素
        auto idx = lower_bound(a.begin(), a.end(), w); //找到第一个大于等于W的数的位置
        a.insert(idx, w);  //把W插在这个数前面
    }

    cout << ans;

    return 0;
}