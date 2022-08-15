#include <bits/stdc++.h>

using namespace std;
int a[1000005];
int main() {
   int T;
   cin >> T;
   for(int l = 0; l < T; l++) {
      int n, ans = 0;
      cin >> n;
      for (int i = 1; i <= n; i++) cin >> a[i];
      int i = 1;
      while (i <= n) {
         if (a[i] == i) i++;
         else {
            int maxv = a[i];
            int j = i + 1;
            maxv = max(maxv, a[j]);
            while(maxv > j) {
                j++;
                maxv = max(maxv, a[j]);
            }
            ans += j - i + 1;
            i = j + 1;
         }
      }
      cout << ans << endl;
   }
   return 0;
}