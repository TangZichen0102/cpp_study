/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;
int main()
{
   vector<int> v(3);

   v[0] = 1, v[1] = 2, v[2] = 3;
   v.erase(v.end() - 1);
   for (auto i : v)
   {
      cout << i << " ";
   }
   return 0;
}
/*
样例及推导

*/