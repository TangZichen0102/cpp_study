/*
题目来源
Expedition 丛林探险
http://poj.org/problem?id=2431
题解
https://blog.csdn.net/qq_41661809/article/details/104950909
https://www.cnblogs.com/Bravewtz/p/10629178.html
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
const int MAXN = 5e5 + 10;
LL a[MAXN], b[MAXN];
LL n, l, p;
priority_queue<LL> q; // 存储油量
struct node {
   LL x, f; // 路程和油量
} s[MAXN];
bool cmp(const node u, const node v) { 
   if (u.x == v.x) return u.f > v.f;
   return u.x < v.x;
}
LL sum;
int main() {
#ifndef ONLINE_JUDGE
   freopen("丛林探险.in", "r", stdin);
#endif
   scanf("%lld", &n);
   for (LL i = 0; i < n; i++) {
      scanf("%lld %lld", &a[i], &b[i]);
      sum += b[i];
   }
   scanf("%lld %lld", &l, &p);
   if(sum + p < l) {
      cout << -1;
      return 0;
   }
   for (LL i = 0; i < n; i++) s[i].x = l - a[i], s[i].f = b[i];
   s[n].x = l; // 终点也相当于加油站
   s[n].f = 0; // 终点不加油
   sort(s, s + n + 1, cmp); // 根据车到终点的距离排序
   LL ans = 0; 
   LL pos = 0;// 当前油量 
   LL t = p; // 当前位置
   for (LL i = 0; i < n + 1; i++) {
      LL d = s[i].x - pos;
      while (t < d) { // 只要当前油量不足,就可以使用以前获得的加油的权利
         if (q.empty()) { // 如果没有权利,就输出-1
            cout << -1;
            return 0;
         }
         t += q.top(); // 车的油量加上上一个加油站的油量
         q.pop(); // 将上个油量删除
         ans++;
      }
      t -= d; // 减去路程
      pos = s[i].x; // 将位置设为这个加油站的位置
      q.push(s[i].f); // 将这个加油站的油量插入优先队列
   }
   cout << ans;
   return 0;
}
/*
样例及推导
如果认为, 每经过一个加油站时, 我们就获得一次在后面任何时候加油的权利
那么希望到达终点次数尽可能少, 所以当燃料为0时再加油, 并且选择加油量最大的加
维护一个优先队列q,每次加油时,加队列最大的。
*/