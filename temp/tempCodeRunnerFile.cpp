#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i <= n / i; i++) {
    string s = to_string(i * i);
    string _t = s;
    reverse(s.begin(), s.end());
    if(s == _t) cout << s << endl;
  }
    return 0;
}