
#include <bits/stdc++.h>

using namespace std;
int get_num(int a[], int n) {
   int sum = 0, l = 0, maxl = 0, maxr = 0, maxsum = 0;
   for(int i = 0; i < n; i++) {
      if(sum >= 0) sum += a[i];
      else {
         sum = a[i];
         l = i;
      }
      if(sum > maxsum) {
         maxsum = sum;
         maxl = l, maxr = i;
      }
   }
   cout << maxl << " " << maxr << endl;
}
int main() {
   int a[10] = {1, 2, 3, 4, 5, -1000, 1, 1}, n = 8;
   get_num(a, n);
   return 0;
}