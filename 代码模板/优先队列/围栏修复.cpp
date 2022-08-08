/*
题目来源
围栏修复 Fence Repair
http://poj.org/problem?id=3253
题解
https://www.bilibili.com/video/BV1Aq4y1i793?spm_id_from=333.337.search-card.all.click&vd_source=707ae9523ad2c893a1d14c0c92f6d83b
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <queue>
using namespace std;
typedef long long LL;
LL n;
int main()
{
   while(cin >> n) {
      priority_queue<int, vector<int>, greater<int> > q;
      for(int i = 1; i <= n; i++) {
         int a;
         cin >> a;
         q.push(a);
      }
      long long sum = 0;
      if(q.size() == 1) {
         sum += q.top();
         q.pop();
      }
      while(q.size() > 1) {
         int t1 = q.top();
         q.pop();
         int t2 = q.top();
         q.pop();
         sum += t1 + t2;
         q.push(t1 + t2);
      }
      cout << sum << endl;
   }
   return 0;
}
/*
样例及推导

*/