#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}
long long lcm(long long a, long long b) {
  int sum = gcd(a, b);
  return a / sum * b;
}
long long a, b;
int main() {
  cin >> a >> b;
  cout << gcd(a, b) << " " << lcm(a, b);
  return 0;
}