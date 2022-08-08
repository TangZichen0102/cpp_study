/*
上海月赛
城市的中心
https://iai.sh.cn/problem/444

#1862、城市中心
https://oj.shiyancang.cn/Problem/1862.html

首先一条直线上两点（x,y)的距离公式为：|x-y|
那么使以上两部分总和最小就等同于：
在两条直线（横纵坐标对应直线）中，每条直线上分别有n个点（分别对应原来n个点的横坐标和纵坐标），分别取两点cx和cy，使每条直线上n个点分别到cx和cy的距离总和最小

cx和cy的位置
有这样一个定理：一条直线上n个点到一个点的距离之和最小，那么这个点在最中间两个点之间（或者与最中间一个点重合）
这里需要判断一下n的奇偶性

当n为奇 7
中心点是4
(7+1)/2 = 4
当n为偶 8
中心点可以是在4-5之间，可取4或5
(8+1)/2 = 4

所以可以通用公式 (n+1)/2来表示中心点 （数组从1开始）
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int n, x[N], y[N];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    sort(x + 1, x + 1 + n);
    sort(y + 1, y + 1 + n);
    long long  h = 0;
    for (int i = 1; i <= n; i++)
        h += abs(x[i] - x[n / 2 + 1]) + abs(y[i] - y[n / 2 + 1]);
    cout << h;
    return 0;
}