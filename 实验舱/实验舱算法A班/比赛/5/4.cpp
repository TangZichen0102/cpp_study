/*
题目来源 城市中心
https://oj.shiyancang.cn/Contest/Problem/1862.html?index=3&cid=5116&type=4
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long LL;
LL n;
int x[N], y[N];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];
    sort(x + 1, x + 1 + n);
    sort(y + 1, y + 1 + n);
    long long  h = 0;
    for (int i = 1; i <= n; i++) h += abs(x[i] - x[n / 2 + 1]) + abs(y[i] - y[n / 2 + 1]);
    cout << h;
    return 0;
}
/*
样例及推导
4
1 0
0 1
-1 0
0 -1
*/