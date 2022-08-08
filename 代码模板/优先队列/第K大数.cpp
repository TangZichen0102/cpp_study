/*
题目来源
第K大数 The kth great number
https://acm.hdu.edu.cn/showproblem.php?pid=4006
题解
https://www.bilibili.com/video/BV1ba4y1W75C?spm_id_from=333.880.my_history.page.click
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int h[N], Size;
void up(int u) {
   while(u / 2 > 0 && h[u / 2] > h[u]) {
      swap(h[u / 2], h[u]);
      u >>= 1;
   }
}
void down(int u) {
   while(u < Size) {
      int v = u;
      if(u * 2 <= Size && h[v] > h[u * 2]) v = u * 2;
      if(u * 2 + 1 <= Size && h[v] > h[u * 2 + 1]) v = u * 2 + 1;
      if(u == v) break;
      swap(h[u], h[v]);
      u = v;
   }
}
void push(int u) {
   h[++Size] = u;
   up(Size);
}
int top() {
   if(Size >= 1) return h[1];
   else return 0;
}
void pop() {
   h[1] = h[Size--];
   down(1);
}
vector<int> v;
void printv() {
   for(int i : v) {
      cout << i << " ";
   }
   cout << endl;
}
int main() {
#ifndef ONLINE_JUDGE
   freopen("第K大数.in", "r", stdin);
#endif
   int n, k;
   cin >> n >> k;
   // cout << n << k;
   for(int i = 0; i < n; i++) {
      char c;
      cin >> c;
      // cout << c;
      int a;
      if(c == 'I') {
         cin >> a;
         v.push_back(a);
         // printv();
      }
      else {
         for(int j = 0; j < n; j++) {
            int t = v[j];
            if(Size < k || top() < t) push(t);
            else pop();
         }
         cout << top() << endl;
      }
   }
   return 0;
}
/*
样例及推导

*/