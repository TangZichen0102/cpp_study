

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  if (n == 1)
  {
    cout << 0;
    return 0;
  }
  for (int i = 1; i <= n - 1; i++)
    sum += i;
  cout << sum * 2 + n - 1;
  return 0;
}