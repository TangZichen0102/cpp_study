/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;
const int MAXN = 1e8 + 10;
int a[MAXN];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
   cin >> n;
   cin >> a[0];
   for (int i = 1; i < n;i++)
   {
      scanf("%d", &a[i]);
      printf("%d ", a[i]);
   }
   cout << a[0];
   return 0;
}
/*
样例及推导

*/