#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[200005], b[200005];
int minn = INT_MAX;
int main() {
  cin >> n >> m;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  sort(a, a + n);
  sort(b, b + m);
  int i = 0, j = 0;
  while(i < n && j < m) {
    minn = min(minn, abs(a[i] - b[j]));
    if(a[i] > b[j]) j++;
    else i++;
  }
  cout << minn;
  return 0;
}