
#include <bits/stdc++.h>

using namespace std;
long long lowbit(long long n) {
   return n & -n;
}
int main() {
   cout << lowbit(6);
   return 0;
}