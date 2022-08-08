#include <bits/stdc++.h>
using namespace std;
long long n, t, cnt = 0;
int main()
{
  cin >> n;
  cout << 1 << endl;
  for (int i = 0; i < 32 && n >= (1 << i); i++)
  {
    if (n & (1 << i))
    {
      cnt++;
      if (n < (1LL << (i + 1)))
        break;
      puts("dup");
    }
    puts("dup\nadd");
  }
  for (int i = 0; i < cnt - 1; i++)
    puts("add");
  return 0;
}