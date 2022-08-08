/*
题目来源
#2053、不包含的子序列
https://oj.shiyancang.cn/Problem/2053.html
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, k, a[100005];
bool vis[10005];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
   cin >> n >> k;
   int ans = 0, cnt = k;
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) {
    if(!vis[a[i]]) {
        cnt--;
        vis[a[i]] = true;
    }
    if(!cnt) {
        ans++;
        cnt = k;
        memset(vis, 0, sizeof(vis));
    }
   }
   cout << ans + 1;
   return 0;
}
/*
样例及推导
子序列中是否能取到1～k，取决于原序列中某一区间内是否包含1～k的数字
原序列能分成多少个满足条件的区间，子序列最多就能取到多少个元素
原序列 ：1,5,3,2,5,1,3,4,4,2,5,1,2,3
当取一个数时：【1,5,3,2,5,1,3,4】,【4,2,5,1,2,3】
显然只能分成2个区间


假如原序列 ：1,5,3,2,5,1,3,4,4,2,5,1,2,3,  1, 1, 2, 4, 5
最后的1 1 2 4 5显然不包含1～K的全部数字，所以还是只有2个区间
*/