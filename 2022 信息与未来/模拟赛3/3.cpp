#include <bits/stdc++.h>
using namespace std;
long long x[50] = {0, 0, 1}, y[50] = {0, 1, 0}, T, n;
int main()
{
  for (int i = 3; i <= 50; i++)
    x[i] = x[i - 1] + x[i - 2], y[i] = y[i - 1] + y[i - 2];
  cin >> T;
  while (T--)
  {
    cin >> n;
    for (long long i = 2; n - y[i] > 0 && i <= 45; i++)
      if ((n - y[i]) % x[i] == 0)
        cout << i << " "  << (n - y[i]) / x[i] << endl;
  }
  return 0;
}
