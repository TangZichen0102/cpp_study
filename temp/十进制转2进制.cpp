#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, sum = 0;
  cin >> n;
  string s = "";
  for(int i = 1; i <= n; i++) {
    s = s + "2";
    // cout << s << endl;
    sum += atoi(s.c_str());
  }
  cout << sum;
  return 0;
}