/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, a;

template <class T>
void read(T &r)
{
   r = 0;
   char c = getchar();
   bool f = false;
   while (c < 48 || c > 57)
   {
      if (c == 45)
         f ^= 1;
      c = getchar();
   }
   while (c >= 48 && c <= 57)
   {
      r = 10 * r + c - 48;
      c = getchar();
   }
   if (f)
      r = -r;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
   scanf("%d", &n);
   scanf("%d", &a);
   while (--n)
   {
      int b;
      read(b);
      printf("%d ", b);
   }
   printf("%d", a);
   return 0;
}