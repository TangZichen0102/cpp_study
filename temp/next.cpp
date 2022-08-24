#include <bits/stdc++.h>

using namespace std;
int n, m, sum;
int main() {
  cin >> n >> m;
  for(int i = n; i <= m; i++) {
    if(i % 2 == 1) sum += i;
  }
  cout << sum;
  return 0;
}