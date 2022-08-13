#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
int n, a[N], b[N], c;
int main() {
   cin >> n;
   for(int i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
   sort(b, b + n);
   c = unique(b, b + n) - b;
   for(int i = 0; i < n; i++) a[i] = lower_bound(b, b + c, a[i]) - b;
   for(int i = 0; i < n; i++) cout  << a[i] << ' ';
   return 0;
}