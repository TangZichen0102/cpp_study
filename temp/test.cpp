#include <bits/stdc++.h>

using namespace std;
int n;
char a[12];
int main() {
   cin >> n;
   for(int i = 1; i <= n; i++) cin >> a[i];
   do {
      for(int i = 1; i <= n; i++) cout << a[i] << " ";
      cout << endl;
   }while(next_permutation(a + 1, a + n + 1));
   return 0;
}